// Copyright (c) 2014-2016 Bluespec, Inc.  All Rights Reserved.

package Testbench;

// ================================================================
// Project imports

import Delay :: *;

// ================================================================

(* synthesize *)
module mkTestbench(Empty);

  DelayInterface delay <- mkDelayModule;

  Reg #(int) step <- mkReg(0);


  rule rl_step;
    step <= step + 1;
    if (step == 10) $finish;
  endrule

  rule rl_1 (step <= 8);
    Bit #(4) signal = truncate(pack(step));
    delay.feedSignal(signal);
    $display("%2d: feed %2d", step, signal);
  endrule

  rule rl_2 (step >= 2);
    let signal = delay.getSignal;
    $display("%2d: get  %2d", step, signal);
  endrule

endmodule

endpackage