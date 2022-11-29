// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrisc_v__Syms.h"


void Vrisc_v___024root__trace_chg_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrisc_v___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_top_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrisc_v___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrisc_v___024root__trace_chg_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((((0x318U == ((0x3f8U 
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
                                 & (~ (IData)(vlSelf->risc_v__DOT__EQ))))));
        bufp->chgBit(oldp+1,(vlSelf->risc_v__DOT__EQ));
        bufp->chgBit(oldp+2,(((0x18U == (0x3f8U & (
                                                   (0x3f8U 
                                                    & (vlSelf->risc_v__DOT__instr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         >> 0xcU))))) 
                              | (0x98U == (0x3f8U & 
                                           ((0x3f8U 
                                             & (vlSelf->risc_v__DOT__instr 
                                                << 3U)) 
                                            | (7U & 
                                               (vlSelf->risc_v__DOT__instr 
                                                >> 0xcU))))))));
        bufp->chgBit(oldp+3,(((0x98U == (0x3f8U & (
                                                   (0x3f8U 
                                                    & (vlSelf->risc_v__DOT__instr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         >> 0xcU))))) 
                              | (0x18U == (0x3f8U & 
                                           ((0x3f8U 
                                             & (vlSelf->risc_v__DOT__instr 
                                                << 3U)) 
                                            | (7U & 
                                               (vlSelf->risc_v__DOT__instr 
                                                >> 0xcU))))))));
        bufp->chgBit(oldp+4,((0x11aU == ((0x3f8U & 
                                          (vlSelf->risc_v__DOT__instr 
                                           << 3U)) 
                                         | (7U & (vlSelf->risc_v__DOT__instr 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+5,((0x1aU == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                                   << 3U)) 
                                        | (7U & (vlSelf->risc_v__DOT__instr 
                                                 >> 0xcU))))));
        bufp->chgIData(oldp+6,(vlSelf->risc_v__DOT__ImmOp),32);
        bufp->chgIData(oldp+7,(vlSelf->risc_v__DOT__pc),32);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->risc_v__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->risc_v__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->risc_v__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+11,(vlSelf->risc_v__DOT__ALUctrl),3);
        bufp->chgIData(oldp+12,(vlSelf->risc_v__DOT__instr),32);
        bufp->chgCData(oldp+13,(vlSelf->risc_v__DOT__ImmSrc),2);
        bufp->chgIData(oldp+14,(((((0x318U == ((0x3f8U 
                                                & (vlSelf->risc_v__DOT__instr 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlSelf->risc_v__DOT__instr 
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
        bufp->chgIData(oldp+15,(vlSelf->risc_v__DOT__ALUop1),32);
        bufp->chgIData(oldp+16,(vlSelf->risc_v__DOT__ALUop2),32);
        bufp->chgIData(oldp+17,(vlSelf->risc_v__DOT__reg_file__DOT__regfile
                                [(0x1fU & (vlSelf->risc_v__DOT__instr 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+18,(((4U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                  ? ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                      ? 0U : ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                               ? ((vlSelf->risc_v__DOT__ALUop1 
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
                                             + vlSelf->risc_v__DOT__ALUop2))))),32);
        bufp->chgIData(oldp+19,(vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register
                                [(0xffU & vlSelf->risc_v__DOT__ALUop1)]),32);
        bufp->chgCData(oldp+20,((0xffU & vlSelf->risc_v__DOT__ALUop1)),8);
        bufp->chgCData(oldp+21,((0xffU & vlSelf->risc_v__DOT__pc)),8);
        bufp->chgIData(oldp+22,(((0x1aU == ((0x3f8U 
                                             & (vlSelf->risc_v__DOT__instr 
                                                << 3U)) 
                                            | (7U & 
                                               (vlSelf->risc_v__DOT__instr 
                                                >> 0xcU))))
                                  ? vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register
                                 [(0xffU & vlSelf->risc_v__DOT__ALUop1)]
                                  : ((4U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                      ? ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                                   ? 
                                                  ((vlSelf->risc_v__DOT__ALUop1 
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
        bufp->chgIData(oldp+23,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[0]),32);
        bufp->chgIData(oldp+24,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[1]),32);
        bufp->chgIData(oldp+25,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[2]),32);
        bufp->chgIData(oldp+26,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[3]),32);
        bufp->chgIData(oldp+27,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[4]),32);
        bufp->chgIData(oldp+28,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[5]),32);
        bufp->chgIData(oldp+29,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[6]),32);
        bufp->chgIData(oldp+30,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[7]),32);
        bufp->chgIData(oldp+31,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[8]),32);
        bufp->chgIData(oldp+32,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[9]),32);
        bufp->chgIData(oldp+33,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[10]),32);
        bufp->chgIData(oldp+34,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[11]),32);
        bufp->chgIData(oldp+35,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[12]),32);
        bufp->chgIData(oldp+36,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[13]),32);
        bufp->chgIData(oldp+37,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[14]),32);
        bufp->chgIData(oldp+38,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[15]),32);
        bufp->chgIData(oldp+39,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[16]),32);
        bufp->chgIData(oldp+40,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[17]),32);
        bufp->chgIData(oldp+41,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[18]),32);
        bufp->chgIData(oldp+42,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[19]),32);
        bufp->chgIData(oldp+43,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[20]),32);
        bufp->chgIData(oldp+44,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[21]),32);
        bufp->chgIData(oldp+45,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[22]),32);
        bufp->chgIData(oldp+46,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[23]),32);
        bufp->chgIData(oldp+47,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[24]),32);
        bufp->chgIData(oldp+48,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[25]),32);
        bufp->chgIData(oldp+49,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[26]),32);
        bufp->chgIData(oldp+50,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[27]),32);
        bufp->chgIData(oldp+51,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[28]),32);
        bufp->chgIData(oldp+52,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[29]),32);
        bufp->chgIData(oldp+53,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[30]),32);
        bufp->chgIData(oldp+54,(vlSelf->risc_v__DOT__reg_file__DOT__regfile[31]),32);
    }
    bufp->chgBit(oldp+55,(vlSelf->clk));
    bufp->chgBit(oldp+56,(vlSelf->rst));
    bufp->chgIData(oldp+57,(vlSelf->a0),32);
    bufp->chgIData(oldp+58,(vlSelf->instruction),32);
    bufp->chgCData(oldp+59,(vlSelf->pc_addr),8);
}

void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_cleanup\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
