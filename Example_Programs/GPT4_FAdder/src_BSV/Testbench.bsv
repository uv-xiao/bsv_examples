// Copyright (c) 2014-2016 Bluespec, Inc.  All Rights Reserved.

package Testbench;

// ================================================================
// Project imports

import FAdder :: *;

// ================================================================

(* synthesize *)
module mkTestbench();
   Bit#(4) a = 4'b1010;
   Bit#(4) b = 4'b0101;
   Bit#(1) cin = 1'b0;
   Bit#(4) sum;
   Bit#(1) cout;

   (sum, cout) = mk4BitFullAdder(a, b, cin);

   rule display_results;
      $display("a = %b, b = %b, cin = %b, sum = %b, cout = %b", a, b, cin, sum, cout);
   endrule
endmodule

// ================================================================

endpackage
