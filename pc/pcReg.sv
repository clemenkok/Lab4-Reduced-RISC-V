module pcReg #(
    parameter WIDTH = 32
)(
    // interface signals
    input logic clk, //clock
    input logic rst, //reset
    input logic next_PC [WIDTH-1:0],
    output logic pc [WIDTH-1:0]
);

always_ff @ (posedge clk)
    if (rst) pc <= {WIDTH{1'b0}};
    else pc <= next_PC;

endmodule
