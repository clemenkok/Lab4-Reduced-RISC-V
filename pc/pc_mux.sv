module pc_mux #(
    parameter WIDTH = 32
)(
    // interface signals
    input logic PCsrc,
    input logic pc [WIDTH-1:0],
    input logic ImmOp [WIDTH-1:0],
    output logic next_PC [WIDTH-1:0]
);

always_ff @ (posedge clk)
    if (PCsrc) next_PC <= pc + ImmOp;
    else next_PC <= pc + WIDTH'b4;

    // assign next_PC = PCsrc ? pc_ImmOp : pc+WIDTH'b4

endmodule
