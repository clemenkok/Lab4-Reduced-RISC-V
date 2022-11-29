// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "verilated.h"

#include "Vrisc_v___024root.h"

VL_INLINE_OPT void Vrisc_v___024root___sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__risc_v__DOT__reg_file__DOT__regfile__v0;
    IData/*31:0*/ __Vdlyvval__risc_v__DOT__reg_file__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__risc_v__DOT__reg_file__DOT__regfile__v0;
    CData/*7:0*/ __Vdlyvdim0__risc_v__DOT__data_mem__DOT__data_mem_register__v0;
    IData/*31:0*/ __Vdlyvval__risc_v__DOT__data_mem__DOT__data_mem_register__v0;
    CData/*0:0*/ __Vdlyvset__risc_v__DOT__data_mem__DOT__data_mem_register__v0;
    // Body
    __Vdlyvset__risc_v__DOT__data_mem__DOT__data_mem_register__v0 = 0U;
    __Vdlyvset__risc_v__DOT__reg_file__DOT__regfile__v0 = 0U;
    if ((0x11aU == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                               << 3U)) | (7U & (vlSelf->risc_v__DOT__instr 
                                                >> 0xcU))))) {
        __Vdlyvval__risc_v__DOT__data_mem__DOT__data_mem_register__v0 
            = vlSelf->risc_v__DOT__ALUop2;
        __Vdlyvset__risc_v__DOT__data_mem__DOT__data_mem_register__v0 = 1U;
        __Vdlyvdim0__risc_v__DOT__data_mem__DOT__data_mem_register__v0 
            = (0xffU & vlSelf->risc_v__DOT__ALUop1);
    }
    if (((0x18U == (0x3f8U & ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                         << 3U)) | 
                              (7U & (vlSelf->risc_v__DOT__instr 
                                     >> 0xcU))))) | 
         (0x98U == (0x3f8U & ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                         << 3U)) | 
                              (7U & (vlSelf->risc_v__DOT__instr 
                                     >> 0xcU))))))) {
        __Vdlyvval__risc_v__DOT__reg_file__DOT__regfile__v0 
            = ((0x1aU == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                                     << 3U)) | (7U 
                                                & (vlSelf->risc_v__DOT__instr 
                                                   >> 0xcU))))
                ? vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register
               [(0xffU & vlSelf->risc_v__DOT__ALUop1)]
                : ((4U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                    ? ((2U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                        ? 0U : ((1U & (IData)(vlSelf->risc_v__DOT__ALUctrl))
                                 ? ((vlSelf->risc_v__DOT__ALUop1 
                                     < vlSelf->risc_v__DOT__ALUop2)
                                     ? 1U : 0U) : 0U))
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
                               + vlSelf->risc_v__DOT__ALUop2)))));
        __Vdlyvset__risc_v__DOT__reg_file__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__risc_v__DOT__reg_file__DOT__regfile__v0 
            = (0x1fU & (vlSelf->risc_v__DOT__instr 
                        >> 7U));
    }
    vlSelf->risc_v__DOT__pc = ((IData)(vlSelf->rst)
                                ? 0U : vlSelf->risc_v__DOT__next_PC);
    if (__Vdlyvset__risc_v__DOT__data_mem__DOT__data_mem_register__v0) {
        vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register[__Vdlyvdim0__risc_v__DOT__data_mem__DOT__data_mem_register__v0] 
            = __Vdlyvval__risc_v__DOT__data_mem__DOT__data_mem_register__v0;
    }
    if (__Vdlyvset__risc_v__DOT__reg_file__DOT__regfile__v0) {
        vlSelf->risc_v__DOT__reg_file__DOT__regfile[__Vdlyvdim0__risc_v__DOT__reg_file__DOT__regfile__v0] 
            = __Vdlyvval__risc_v__DOT__reg_file__DOT__regfile__v0;
    }
    vlSelf->a0 = vlSelf->risc_v__DOT__reg_file__DOT__regfile
        [0xaU];
    vlSelf->pc_addr = (0xffU & vlSelf->risc_v__DOT__pc);
    vlSelf->risc_v__DOT__instr = vlSelf->risc_v__DOT__my_instr_mem__DOT__rom_array
        [(0xffU & vlSelf->risc_v__DOT__pc)];
    vlSelf->instruction = vlSelf->risc_v__DOT__instr;
    vlSelf->risc_v__DOT__ALUctrl = ((0x98U == ((0x3f8U 
                                                & (vlSelf->risc_v__DOT__instr 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlSelf->risc_v__DOT__instr 
                                                     >> 0xcU))))
                                     ? 0U : ((0x9eU 
                                              == ((0x3f8U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        >> 0xcU))))
                                              ? 3U : 
                                             ((0x9aU 
                                               == (
                                                   (0x3f8U 
                                                    & (vlSelf->risc_v__DOT__instr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         >> 0xcU))))
                                               ? 5U
                                               : ((0x9fU 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (vlSelf->risc_v__DOT__instr 
                                                          >> 0xcU))))
                                                   ? 2U
                                                   : 
                                                  ((0x1aU 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlSelf->risc_v__DOT__instr 
                                                           >> 0xcU))))
                                                    ? 0U
                                                    : 
                                                   ((0x11aU 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->risc_v__DOT__instr 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (vlSelf->risc_v__DOT__instr 
                                                            >> 0xcU))))
                                                     ? 0U
                                                     : 7U))))));
    vlSelf->risc_v__DOT__ALUop1 = vlSelf->risc_v__DOT__reg_file__DOT__regfile
        [(0x1fU & (vlSelf->risc_v__DOT__instr >> 0xfU))];
    vlSelf->risc_v__DOT__ImmSrc = ((0x18U == (0x3f8U 
                                              & ((0x3f8U 
                                                  & (vlSelf->risc_v__DOT__instr 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelf->risc_v__DOT__instr 
                                                       >> 0xcU)))))
                                    ? 0U : ((0x98U 
                                             == (0x3f8U 
                                                 & ((0x3f8U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (vlSelf->risc_v__DOT__instr 
                                                          >> 0xcU)))))
                                             ? 0U : 
                                            ((0x318U 
                                              == (0x3f8U 
                                                  & ((0x3f8U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlSelf->risc_v__DOT__instr 
                                                           >> 0xcU)))))
                                              ? 2U : 0U)));
    vlSelf->risc_v__DOT__ImmOp = ((0U == (IData)(vlSelf->risc_v__DOT__ImmSrc))
                                   ? (((- (IData)((vlSelf->risc_v__DOT__instr 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->risc_v__DOT__instr 
                                                   >> 0x14U))
                                   : ((1U == (IData)(vlSelf->risc_v__DOT__ImmSrc))
                                       ? (((- (IData)(
                                                      (vlSelf->risc_v__DOT__instr 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelf->risc_v__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->risc_v__DOT__instr 
                                                   >> 7U))))
                                       : ((2U == (IData)(vlSelf->risc_v__DOT__ImmSrc))
                                           ? (((- (IData)(
                                                          (vlSelf->risc_v__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->risc_v__DOT__instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->risc_v__DOT__instr 
                                                          >> 7U)))))
                                           : (((- (IData)(
                                                          (vlSelf->risc_v__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelf->risc_v__DOT__instr 
                                                 >> 0x14U)))));
    vlSelf->risc_v__DOT__ALUop2 = (((0x98U == (0x3f8U 
                                               & ((0x3f8U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        >> 0xcU))))) 
                                    | (0x18U == (0x3f8U 
                                                 & ((0x3f8U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (vlSelf->risc_v__DOT__instr 
                                                          >> 0xcU))))))
                                    ? vlSelf->risc_v__DOT__ImmOp
                                    : vlSelf->risc_v__DOT__reg_file__DOT__regfile
                                   [(0x1fU & (vlSelf->risc_v__DOT__instr 
                                              >> 0x14U))]);
    vlSelf->risc_v__DOT__EQ = (vlSelf->risc_v__DOT__ALUop1 
                               == vlSelf->risc_v__DOT__ALUop2);
    vlSelf->risc_v__DOT__next_PC = ((((0x318U == ((0x3f8U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->risc_v__DOT__instr 
                                                        >> 0xcU)))) 
                                      & (IData)(vlSelf->risc_v__DOT__EQ)) 
                                     | ((0x319U == 
                                         ((0x3f8U & 
                                           (vlSelf->risc_v__DOT__instr 
                                            << 3U)) 
                                          | (7U & (vlSelf->risc_v__DOT__instr 
                                                   >> 0xcU)))) 
                                        & (~ (IData)(vlSelf->risc_v__DOT__EQ))))
                                     ? (vlSelf->risc_v__DOT__pc 
                                        + vlSelf->risc_v__DOT__ImmOp)
                                     : ((IData)(4U) 
                                        + vlSelf->risc_v__DOT__pc));
}

void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vrisc_v___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
