
import StmtFSM::*;
import BRAM::*;
import FIFOF::*;



typedef Bit#(32) T;
typedef Bit#(6) AT;
typedef Bit#(3) MT;
typedef Bit#(3) NT;
typedef Bit#(4) MMT;
typedef Bit#(4) NNT;
Integer m = 8;
Integer n = 8;
MMT mm = fromInteger(m);
NNT nn = fromInteger(n);

function BRAMRequest#(AT, T) readA(AT addr);
  return BRAMRequest{
    write: False,
    responseOnWrite:False,
    address: addr,
    datain: ?
  };
endfunction

function BRAMRequest#(AT, T) writeA(AT addr,T data);
  return BRAMRequest{
    write: True,
    responseOnWrite:False,
    address: addr,
    datain: data
  };
endfunction

function BRAMRequest#(MT, T) readM(MT addr);
  return BRAMRequest{
    write: False,
    responseOnWrite:False,
    address: addr,
    datain: ?
  };
endfunction

function BRAMRequest#(MT, T) writeM(MT addr,T data);
  return BRAMRequest{
    write: True,
    responseOnWrite:False,
    address: addr,
    datain: data
  };
endfunction


function BRAMRequest#(NT, T) readN(NT addr);
  return BRAMRequest{
    write: False,
    responseOnWrite:False,
    address: addr,
    datain: ?
  };
endfunction

function BRAMRequest#(NT, T) writeN(NT addr,T data);
  return BRAMRequest{
    write: True,
    responseOnWrite:False,
    address: addr,
    datain: data
  };
endfunction

interface PipelinedMul;
  method Action put(T a, T b);
  method T get();
endinterface

(* synthesize *)
module mkPipelinedMul(PipelinedMul);
  Reg#(T) c <- mkRegU;

  method Action put(T a, T b);
    c <= a * b;
  endmethod

  method T get();
    return c;
  endmethod

endmodule

function AT addr(MT i, NT j); // i * N + j
  return  extend(i<<3) + extend(j);
endfunction

interface PolyBench;
  method FIFOF#(T) fifo();
  method FSM fsm();
endinterface

(* synthesize *)
module mkAtax (PolyBench);
  BRAM_Configure cfg = defaultValue;
  BRAM2Port#(AT, T) arrA <- mkBRAM2Server(cfg);
  BRAM2Port#(NT, T) arrX <- mkBRAM2Server(cfg);
  BRAM2Port#(NT, T) arrY <- mkBRAM2Server(cfg);
  Reg#(MMT) ii <- mkRegU;
  Reg#(NNT) jj <- mkRegU;
  Reg#(T) acc <- mkRegU;
  PipelinedMul mul <- mkPipelinedMul;

  FIFOF#(T) fake <- mkFIFOF;

  Stmt s = seq
    for (ii <=0; ii < mm; ii <= ii+1 )
      seq
        $display("i: %d", ii);
        acc <= 0;
        for (jj <=0; jj < nn; jj <= jj+1 )
          seq
            action
              let i = truncate(ii);
              let j = truncate(jj);
              arrA.portA.request.put(readA(addr(i,j)));
              arrX.portA.request.put(readN(j));
            endaction
            action
              let x <- arrA.portA.response.get;
              let y <- arrX.portA.response.get;
              mul.put(x, y);
            endaction
            action
              let x = mul.get();
              acc <= acc + x;
            endaction
          endseq
        for (jj <=0; jj < nn; jj <= jj+1)
          seq
            action
              let i = truncate(ii);
              let j = truncate(jj);
              arrY.portA.request.put(readN(j));
              arrA.portA.request.put(readA(addr(i,j)));
            endaction
            action
              let x <- arrA.portA.response.get;
              mul.put(x, acc);
            endaction
            action
              let j = truncate(jj);
              let x = mul.get();
              let y <- arrY.portA.response.get;
              arrY.portA.request.put(writeN(j, y + x));
              fake.enq(y+x);
            endaction
          endseq
      endseq
  endseq;

  FSM sfsm <- mkFSM(s);

  interface fifo = fake;
  interface fsm = sfsm;

endmodule

module testAtax (Empty);

  PolyBench pb <- mkAtax;

  Reg#(int) cycle_count <- mkReg(0);
  
  rule rl_count;
    cycle_count <= cycle_count + 1;
  endrule

  rule take_fake;
    let x <- pb.fifo.deq;
  endrule


  Stmt configSeq =
  (seq
    pb.fsm.start;
    action
      await (pb.fsm.done);
      $display("Cycle count: %d", cycle_count);
    endaction
  endseq);

  mkAutoFSM(configSeq);

   // -----

endmodule

