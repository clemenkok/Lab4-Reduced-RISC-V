// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "verilated.h"

#include "Vrisc_v___024root.h"

VL_ATTR_COLD void Vrisc_v___024root___initial__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h5035a0a6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb978afc8__0;
    // Body
    __Vtemp_h5035a0a6__0[0U] = 0x2e6d656dU;
    __Vtemp_h5035a0a6__0[1U] = 0x696f6e73U;
    __Vtemp_h5035a0a6__0[2U] = 0x72756374U;
    __Vtemp_h5035a0a6__0[3U] = 0x696e7374U;
    __Vtemp_h5035a0a6__0[4U] = 0x6573745fU;
    __Vtemp_h5035a0a6__0[5U] = 0x74U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h5035a0a6__0)
                 ,  &(vlSelf->risc_v__DOT__my_instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
    __Vtemp_hb978afc8__0[0U] = 0x2e6d656dU;
    __Vtemp_hb978afc8__0[1U] = 0x61726f6dU;
    __Vtemp_hb978afc8__0[2U] = 0x646174U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb978afc8__0)
                 ,  &(vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vrisc_v___024root___settle__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->pc_addr = (0xffU & vlSelf->risc_v__DOT__pc);
    vlSelf->a0 = vlSelf->risc_v__DOT__reg_file__DOT__regfile
        [0xaU];
    vlSelf->risc_v__DOT__instr = vlSelf->risc_v__DOT__my_instr_mem__DOT__rom_array
        [(0xffU & vlSelf->risc_v__DOT__pc)];
    vlSelf->instruction = vlSelf->risc_v__DOT__instr;
    vlSelf->risc_v__DOT__ALUop1 = vlSelf->risc_v__DOT__reg_file__DOT__regfile
        [(0x1fU & (vlSelf->risc_v__DOT__instr >> 0xfU))];
    if ((0x98U == ((0x3f8U & (vlSelf->risc_v__DOT__instr 
                              << 3U)) | (7U & (vlSelf->risc_v__DOT__instr 
                                               >> 0xcU))))) {
        vlSelf->risc_v__DOT__ALUctrl = 0U;
        vlSelf->risc_v__DOT__ImmSrc = (0xfffU & (vlSelf->risc_v__DOT__instr 
                                                 >> 0x14U));
    } else {
        vlSelf->risc_v__DOT__ALUctrl = 7U;
        vlSelf->risc_v__DOT__ImmSrc = (0xfffU & ((0x319U 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->risc_v__DOT__instr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         >> 0xcU))))
                                                  ? 
                                                 ((0x800U 
                                                   & (vlSelf->risc_v__DOT__instr 
                                                      >> 0x14U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         << 3U)) 
                                                     | ((0x3f0U 
                                                         & (vlSelf->risc_v__DOT__instr 
                                                            >> 0x15U)) 
                                                        | (0xfU 
                                                           & (vlSelf->risc_v__DOT__instr 
                                                              >> 8U)))))
                                                  : 
                                                 (vlSelf->risc_v__DOT__instr 
                                                  >> 0x14U)));
    }
    vlSelf->risc_v__DOT__ImmOp = ((0x131U == ((0x7f0U 
                                               & (vlSelf->risc_v__DOT__instr 
                                                  << 4U)) 
                                              | ((0xeU 
                                                  & (vlSelf->risc_v__DOT__instr 
                                                     >> 0xbU)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->risc_v__DOT__ImmSrc) 
                                                       >> 0xbU)))))
                                   ? (0xfffff000U | (IData)(vlSelf->risc_v__DOT__ImmSrc))
                                   : ((0x630U == (0x7f0U 
                                                  & ((0x7f0U 
                                                      & (vlSelf->risc_v__DOT__instr 
                                                         << 4U)) 
                                                     | ((0xeU 
                                                         & (vlSelf->risc_v__DOT__instr 
                                                            >> 0xbU)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->risc_v__DOT__ImmSrc) 
                                                              >> 0xbU))))))
                                       ? (0xffffe000U 
                                          | ((IData)(vlSelf->risc_v__DOT__ImmSrc) 
                                             << 1U))
                                       : (IData)(vlSelf->risc_v__DOT__ImmSrc)));
    vlSelf->risc_v__DOT__ALUop2 = ((0x98U == ((0x3f8U 
                                               & (vlSelf->risc_v__DOT__instr 
                                                  << 3U)) 
                                              | (7U 
                                                 & (vlSelf->risc_v__DOT__instr 
                                                    >> 0xcU))))
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

VL_ATTR_COLD void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_initial\n"); );
    // Body
    Vrisc_v___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_settle\n"); );
    // Body
    Vrisc_v___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vrisc_v___024root___final(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___final\n"); );
}

VL_ATTR_COLD void Vrisc_v___024root___ctor_var_reset(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->instruction = VL_RAND_RESET_I(32);
    vlSelf->pc_addr = VL_RAND_RESET_I(8);
    vlSelf->risc_v__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->risc_v__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__ImmSrc = VL_RAND_RESET_I(12);
    vlSelf->risc_v__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->risc_v__DOT__my_instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->risc_v__DOT__reg_file__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->risc_v__DOT__data_mem__DOT__data_mem_register[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
