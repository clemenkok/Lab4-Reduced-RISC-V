module top #(
    parameter   WIDTH = 32
)(
    // interface signals
    input   logic                       clk,        // clock
    input   logic                       rst,        // reset
    input   logic [WIDTH-1:0]           pc_in,         
    input   logic [WIDTH-1:0]           ImmOp,     
    input   logic                       PCsrc,  
    input   logic                       pcIn,
    output  logic [WIDTH-1:0]           pc        // output data
    
);

logic next_PC;    // interconnect wire

pc_mux pc_mux(
    .PCsrc (PCsrc),
    .ImmOp (ImmOp),
    .next_PC (next_PC),
    .pc (pcIn)
);

pcReg pcReg(
    .clk (clk),
    .rst (rst),
    .next_PC (next_PC),
    .pc (pc)
);

endmodule
