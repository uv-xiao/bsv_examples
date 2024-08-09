module mkFullAdder(Bit#(1) a, Bit#(1) b, Bit#(1) cin) returns (Bit#(1) sum, Bit#(1) cout);
   Reg#(Bit#(1)) r_sum <- mkReg(0);
   Reg#(Bit#(1)) r_cout <- mkReg(0);

   rule compute_sum;
      r_sum <= a ^ b ^ cin;
      r_cout <= (a & b) | (b & cin) | (cin & a);
   endrule

   return (r_sum, r_cout);
endmodule

module mk4BitFullAdder(Bit#(4) a, Bit#(4) b, Bit#(1) cin) returns (Bit#(4) sum, Bit#(1) cout);
   Reg#(Bit#(1)) carry[4] <- replicateM(mkReg(0));
   Reg#(Bit#(4)) r_sum <- mkReg(0);

   // Instantiate 1-bit full adders
   let (sum0, carry0) = mkFullAdder(a[0], b[0], cin);
   let (sum1, carry1) = mkFullAdder(a[1], b[1], carry[0]);
   let (sum2, carry2) = mkFullAdder(a[2], b[2], carry[1]);
   let (sum3, carry3) = mkFullAdder(a[3], b[3], carry[2]);

   rule compute_4bit_sum;
      carry[0] <= carry0;
      carry[1] <= carry1;
      carry[2] <= carry2;
      carry[3] <= carry3;
      r_sum <= {sum3, sum2, sum1, sum0};
   endrule

   return (r_sum, carry[3]);
endmodule