// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinstr_mem__Syms.h"


void Vinstr_mem___024root__trace_chg_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vinstr_mem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_chg_top_0\n"); );
    // Init
    Vinstr_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstr_mem___024root*>(voidSelf);
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vinstr_mem___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vinstr_mem___024root__trace_chg_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->A),8);
    bufp->chgIData(oldp+1,(vlSelf->instr),32);
}

void Vinstr_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_cleanup\n"); );
    // Init
    Vinstr_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstr_mem___024root*>(voidSelf);
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
