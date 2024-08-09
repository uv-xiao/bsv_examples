package Delay;

interface DelayInterface;
  method Action feedSignal(Bit#(4) signal);
  method ActionValue#(Bit#(4)) getSignal;
endinterface

(* synthesize *)
module mkDelayModule (DelayInterface);
  Reg#(Bit#(4)) delay1 <- mkReg(0);
  Reg#(Bit#(4)) delay2 <- mkReg(0);

  rule delayRule;
    delay2 <= delay1;
  endrule
  
  method Action feedSignal(Bit#(4) signal);
    delay1 <= signal;
  endmethod

  method ActionValue#(Bit#(4)) getSignal;
    return delay2;
  endmethod

endmodule

endpackage