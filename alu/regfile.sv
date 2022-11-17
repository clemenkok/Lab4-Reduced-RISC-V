module name #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter REGISTER_WIDTH = 32
) (
    input  logic                             clk,
    input  logic     [ADDRESS_WIDTH-1:0]     AD1,
    input  logic     [ADDRESS_WIDTH-1:0]     AD2,
    input  logic     [ADDRESS_WIDTH-1:0]     AD3,
    input  logic                             WE3,
    input  logic     [DATA_WIDTH-1:0]        WD3,
    output logic     [DATA_WIDTH-1:0]        RD1,
    output logic     [DATA_WIDTH-1:0]        RD2, 
    output logic     [DATA_WIDTH-1:0]        a0
);

    logic   [REGISTER_WIDTH-1:0]     regfile     [REGISTER_WIDTH-1:0];

    always_ff @ (posedge clk) begin
        if (WE3 = 1'b1)
            regfile [AD3] <= WD3;
        assign regfile [AD1] <= RD1;
        assign regfile [AD2] <= RD2; 
        assign regfile [10] <= a0; // a0 refers to register x10 in RISC-V instruction set
    end

endmodule