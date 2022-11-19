/* verilator lint_off UNUSED */
module sign_extend #(
    parameter   DATA_WIDTH = 32,
                IMM_WIDTH = 12
)(
    input   logic [DATA_WIDTH-1:0]  instr,
    input   logic [IMM_WIDTH-1:0]   ImmSrc,    
    output  logic [DATA_WIDTH-1:0]  ImmOp
);


    always_comb 
        begin
            case ({instr[6:0],instr[14:12]})
            if ({instr[6:0],instr[14:12]} == 10'b0010011000 && ImmSrc[11]==1'b1)
                ImmOp = {20'b11111111111111111111, ImmSrc};
            else
                ImmOp = {20'b0, ImmSrc};
            endcase
        end


endmodule
