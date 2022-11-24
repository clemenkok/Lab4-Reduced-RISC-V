// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


VL_ATTR_COLD void Valu_top___024root__trace_init_sub__TOP__0(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+69,"RegWrite", false,-1);
    tracep->declBit(c+70,"ALUsrc", false,-1);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"data_mem_WE", false,-1);
    tracep->declBus(c+73,"data_mem_WD", false,-1, 31,0);
    tracep->declBus(c+74,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+75,"rs1", false,-1, 31,0);
    tracep->declBus(c+76,"rs2", false,-1, 31,0);
    tracep->declBus(c+77,"rd", false,-1, 31,0);
    tracep->declBus(c+78,"a0", false,-1, 31,0);
    tracep->declBit(c+79,"EQ", false,-1);
    tracep->pushNamePrefix("alu_top ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"OPERAND_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+69,"RegWrite", false,-1);
    tracep->declBit(c+70,"ALUsrc", false,-1);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"data_mem_WE", false,-1);
    tracep->declBus(c+73,"data_mem_WD", false,-1, 31,0);
    tracep->declBus(c+74,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+75,"rs1", false,-1, 31,0);
    tracep->declBus(c+76,"rs2", false,-1, 31,0);
    tracep->declBus(c+77,"rd", false,-1, 31,0);
    tracep->declBus(c+78,"a0", false,-1, 31,0);
    tracep->declBit(c+79,"EQ", false,-1);
    tracep->declBus(c+65,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+66,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+80,"regOp2", false,-1, 31,0);
    tracep->declBus(c+67,"ALUout", false,-1, 31,0);
    tracep->declBus(c+81,"data_mem_out", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+83,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+65,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+66,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+74,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+67,"ALUout", false,-1, 31,0);
    tracep->declBit(c+79,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alusrc ");
    tracep->declBus(c+82,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+80,"regOp2", false,-1, 31,0);
    tracep->declBus(c+68,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+70,"ALUsrc", false,-1);
    tracep->declBus(c+66,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"REGISTER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"WE", false,-1);
    tracep->declBus(c+67,"A", false,-1, 31,0);
    tracep->declBus(c+73,"WD", false,-1, 31,0);
    tracep->declBus(c+81,"RD", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"data_mem_register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"REGISTER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+69,"WE3", false,-1);
    tracep->declBus(c+75,"AD1", false,-1, 31,0);
    tracep->declBus(c+76,"AD2", false,-1, 31,0);
    tracep->declBus(c+77,"AD3", false,-1, 31,0);
    tracep->declBus(c+81,"WD3", false,-1, 31,0);
    tracep->declBus(c+65,"RD1", false,-1, 31,0);
    tracep->declBus(c+80,"RD2", false,-1, 31,0);
    tracep->declBus(c+78,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,"regfile", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu_top___024root__trace_init_top(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_top\n"); );
    // Body
    Valu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_top___024root__trace_register(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_top_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[31]),32);
    bufp->fullIData(oldp+65,(vlSelf->alu_top__DOT__ALUop1),32);
    bufp->fullIData(oldp+66,(vlSelf->alu_top__DOT__ALUop2),32);
    bufp->fullIData(oldp+67,(vlSelf->alu_top__DOT__ALUout),32);
    bufp->fullIData(oldp+68,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+69,(vlSelf->RegWrite));
    bufp->fullBit(oldp+70,(vlSelf->ALUsrc));
    bufp->fullBit(oldp+71,(vlSelf->clk));
    bufp->fullBit(oldp+72,(vlSelf->data_mem_WE));
    bufp->fullIData(oldp+73,(vlSelf->data_mem_WD),32);
    bufp->fullCData(oldp+74,(vlSelf->ALUctrl),3);
    bufp->fullIData(oldp+75,(vlSelf->rs1),32);
    bufp->fullIData(oldp+76,(vlSelf->rs2),32);
    bufp->fullIData(oldp+77,(vlSelf->rd),32);
    bufp->fullIData(oldp+78,(vlSelf->a0),32);
    bufp->fullBit(oldp+79,(vlSelf->EQ));
    bufp->fullIData(oldp+80,(vlSelf->alu_top__DOT__reg_file__DOT__regfile
                             [(0x1fU & vlSelf->rs2)]),32);
    bufp->fullIData(oldp+81,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register
                             [(0x1fU & vlSelf->alu_top__DOT__ALUout)]),32);
    bufp->fullIData(oldp+82,(0x20U),32);
    bufp->fullIData(oldp+83,(3U),32);
}
