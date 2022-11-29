// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrisc_v__Syms.h"


VL_ATTR_COLD void Vrisc_v___024root__trace_init_sub__TOP__0(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+59,"instruction", false,-1, 31,0);
    tracep->declBus(c+60,"pc_addr", false,-1, 7,0);
    tracep->pushNamePrefix("risc_v ");
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+59,"instruction", false,-1, 31,0);
    tracep->declBus(c+60,"pc_addr", false,-1, 7,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBit(c+5,"MEMWrite", false,-1);
    tracep->declBit(c+6,"MEMsrc", false,-1);
    tracep->declBus(c+7,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+11,"rd", false,-1, 4,0);
    tracep->declBus(c+12,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+15,"next_PC", false,-1, 31,0);
    tracep->declBus(c+16,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+17,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+18,"regOp2", false,-1, 31,0);
    tracep->declBus(c+19,"ALUout", false,-1, 31,0);
    tracep->declBus(c+20,"MEMdata", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+62,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+17,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+12,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+19,"ALUout", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alusrc ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"regOp2", false,-1, 31,0);
    tracep->declBus(c+7,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+17,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+5,"WE", false,-1);
    tracep->declBus(c+21,"A", false,-1, 7,0);
    tracep->declBus(c+17,"WD", false,-1, 31,0);
    tracep->declBus(c+20,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+12,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+5,"MEMWrite", false,-1);
    tracep->declBit(c+6,"MEMsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_instr_mem ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"pc", false,-1, 7,0);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_sign_extend ");
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"instr", false,-1, 31,0);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+7,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+15,"next_PC", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+7,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+15,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+64,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+3,"WE3", false,-1);
    tracep->declBus(c+9,"AD1", false,-1, 4,0);
    tracep->declBus(c+10,"AD2", false,-1, 4,0);
    tracep->declBus(c+11,"AD3", false,-1, 4,0);
    tracep->declBus(c+23,"WD3", false,-1, 31,0);
    tracep->declBus(c+16,"RD1", false,-1, 31,0);
    tracep->declBus(c+18,"RD2", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+24+i*1,"regfile", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_init_top(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_top\n"); );
    // Body
    Vrisc_v___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrisc_v___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrisc_v___024root__trace_register(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrisc_v___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrisc_v___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrisc_v___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrisc_v___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_full_top_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrisc_v___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((((0x318U == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                                   << 3U)) 
                                        | (7U & (vlSelf->risc_v__DOT__instr 
                                                 >> 0xcU)))) 
                            & (IData)(vlSelf->risc_v__DOT__EQ)) 
                           | ((0x319U == ((0x3f8U & 
                                           (vlSelf->risc_v__DOT__instr 
                                            << 3U)) 
                                          | (7U & (vlSelf->risc_v__DOT__instr 
                                                   >> 0xcU)))) 
                              & (~ (IData)(vlSelf->risc_v__DOT__EQ))))));
    bufp->fullBit(oldp+2,(vlSelf->risc_v__DOT__EQ));
    bufp->fullBit(oldp+3,(((0x18U == (0x3f8U & ((0x3f8U 
                                                 & (vlSelf->risc_v__DOT__instr 
                                                    << 3U)) 
                                                | (7U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      >> 0xcU))))) 
                           | (0x98U == (0x3f8U & ((0x3f8U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        >> 0xcU))))))));
    bufp->fullBit(oldp+4,(((0x98U == (0x3f8U & ((0x3f8U 
                                                 & (vlSelf->risc_v__DOT__instr 
                                                    << 3U)) 
                                                | (7U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      >> 0xcU))))) 
                           | (0x18U == (0x3f8U & ((0x3f8U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        >> 0xcU))))))));
    bufp->fullBit(oldp+5,((0x11aU == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                                 << 3U)) 
                                      | (7U & (vlSelf->risc_v__DOT__instr 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+6,((0x1aU == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                                << 3U)) 
                                     | (7U & (vlSelf->risc_v__DOT__instr 
                                              >> 0xcU))))));
    bufp->fullIData(oldp+7,(vlSelf->risc_v__DOT__ImmOp),32);
    bufp->fullIData(oldp+8,(vlSelf->risc_v__DOT__pc),32);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->risc_v__DOT__instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->risc_v__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->risc_v__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+12,(vlSelf->risc_v__DOT__ALUctrl),3);
    bufp->fullIData(oldp+13,(vlSelf->risc_v__DOT__instr),32);
    bufp->fullCData(oldp+14,(vlSelf->risc_v__DOT__ImmSrc),2);
    bufp->fullIData(oldp+15,(((((0x318U == ((0x3f8U 
                                             & (vlSelf->risc_v__DOT__instr 
                                                << 3U)) 
                                            | (7U & 
                                               (vlSelf->risc_v__DOT__instr 
                                                >> 0xcU)))) 
                                & (IData)(vlSelf->risc_v__DOT__EQ)) 
                               | ((0x319U == ((0x3f8U 
                                               & (vlSelf->risc_v__DOT__instr 
                                                  << 3U)) 
                                              | (7U 
                                                 & (vlSelf->risc_v__DOT__instr 
                                                    >> 0xcU)))) 
                                  & (~ (IData)(vlSelf->risc_v__DOT__EQ))))
                               ? (vlSelf->risc_v__DOT__pc 
                                  + vlSelf->risc_v__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->risc_v__DOT__pc))),32);
    bufp->fullIData(oldp+16,(vlSelf->risc_v__DOT__ALUop1),32);
    bufp->fullIData(oldp+17,(vlSelf->risc_v__DOT__ALUop2),32);
    bufp->fullIData(oldp+18,(vlSelf->risc_v__DOT__reg_file__DOT__regfile
                             [(0x1fU & (vlSelf->risc_v__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+19,(((4U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                               ? ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                            ? ((vlSelf->risc_v__DOT__ALUop1 
                                                < vlSelf->risc_v__DOT__ALUop2)
                                                ? 1U
                                                : 0U)
                                            : 0U)) : 
                              ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                ? ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                    ? (vlSelf->risc_v__DOT__ALUop1 
                                       | vlSelf->risc_v__DOT__ALUop2)
                                    : (vlSelf->risc_v__DOT__ALUop1 
                                       & vlSelf->risc_v__DOT__ALUop2))
                                : ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                    ? (vlSelf->risc_v__DOT__ALUop1 
                                       - vlSelf->risc_v__DOT__ALUop2)
                                    : (vlSelf->risc_v__DOT__ALUop1 
                                       + vlSelf->risc_v__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+20,(vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register
                             [(0xffU & vlSelf->risc_v__DOT__ALUop1)]),32);
    bufp->fullCData(oldp+21,((0xffU & vlSelf->risc_v__DOT__ALUop1)),8);
    bufp->fullCData(oldp+22,((0xffU & vlSelf->risc_v__DOT__pc)),8);
    bufp->fullIData(oldp+23,(((0x1aU == ((0x3f8U & 
                                          (vlSelf->risc_v__DOT__instr 
                                           << 3U)) 
                                         | (7U & (vlSelf->risc_v__DOT__instr 
                                                  >> 0xcU))))
                               ? vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register
                              [(0xffU & vlSelf->risc_v__DOT__ALUop1)]
                               : ((4U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                   ? ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                                ? (
                                                   (vlSelf->risc_v__DOT__ALUop1 
                                                    < vlSelf->risc_v__DOT__ALUop2)
                                                    ? 1U
                                                    : 0U)
                                                : 0U))
                                   : ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                       ? ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                           ? (vlSelf->risc_v__DOT__ALUop1 
                                              | vlSelf->risc_v__DOT__ALUop2)
                                           : (vlSelf->risc_v__DOT__ALUop1 
                                              & vlSelf->risc_v__DOT__ALUop2))
                                       : ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                           ? (vlSelf->risc_v__DOT__ALUop1 
                                              - vlSelf->risc_v__DOT__ALUop2)
                                           : (vlSelf->risc_v__DOT__ALUop1 
                                              + vlSelf->risc_v__DOT__ALUop2)))))),32);
    bufp->fullIData(oldp+24,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[4]),32);
    bufp->fullIData(oldp+29,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[5]),32);
    bufp->fullIData(oldp+30,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[6]),32);
    bufp->fullIData(oldp+31,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[7]),32);
    bufp->fullIData(oldp+32,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[8]),32);
    bufp->fullIData(oldp+33,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[9]),32);
    bufp->fullIData(oldp+34,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[10]),32);
    bufp->fullIData(oldp+35,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[11]),32);
    bufp->fullIData(oldp+36,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[12]),32);
    bufp->fullIData(oldp+37,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[13]),32);
    bufp->fullIData(oldp+38,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[14]),32);
    bufp->fullIData(oldp+39,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[15]),32);
    bufp->fullIData(oldp+40,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[16]),32);
    bufp->fullIData(oldp+41,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[17]),32);
    bufp->fullIData(oldp+42,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[18]),32);
    bufp->fullIData(oldp+43,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[19]),32);
    bufp->fullIData(oldp+44,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[20]),32);
    bufp->fullIData(oldp+45,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[21]),32);
    bufp->fullIData(oldp+46,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[22]),32);
    bufp->fullIData(oldp+47,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[23]),32);
    bufp->fullIData(oldp+48,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[24]),32);
    bufp->fullIData(oldp+49,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[25]),32);
    bufp->fullIData(oldp+50,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[26]),32);
    bufp->fullIData(oldp+51,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[27]),32);
    bufp->fullIData(oldp+52,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[28]),32);
    bufp->fullIData(oldp+53,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[29]),32);
    bufp->fullIData(oldp+54,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[30]),32);
    bufp->fullIData(oldp+55,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[31]),32);
    bufp->fullBit(oldp+56,(vlSelf->clk));
    bufp->fullBit(oldp+57,(vlSelf->rst));
    bufp->fullIData(oldp+58,(vlSelf->a0),32);
    bufp->fullIData(oldp+59,(vlSelf->instruction),32);
    bufp->fullCData(oldp+60,(vlSelf->pc_addr),8);
    bufp->fullIData(oldp+61,(0x20U),32);
    bufp->fullIData(oldp+62,(3U),32);
    bufp->fullIData(oldp+63,(8U),32);
    bufp->fullIData(oldp+64,(5U),32);
}
