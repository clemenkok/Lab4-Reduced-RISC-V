module pcReg #(
    parameter WIDTH = 32
)(
    // interface signals
    input logic clk, //clock
    input logic rst, //reset
    input logic [WIDTH-1:0] next_PC,
    output logic [WIDTH-1:0] pc
    //output logic [WIDTH-1:0] another_pc (used for debugging)
);

always_ff @ (posedge clk)
    begin
    if (rst) pc <= {WIDTH{1'b0}};
    else pc <= next_PC;

    //assign another_pc = pc;
    end
endmodule
