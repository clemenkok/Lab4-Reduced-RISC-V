// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


void Valu_top___024root__trace_chg_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_chg_top_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_top___024root__trace_chg_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+64,(vlSelf->alu_top__DOT__ALUop1),32);
        bufp->chgIData(oldp+65,(vlSelf->alu_top__DOT__ALUop2),32);
        bufp->chgIData(oldp+66,(vlSelf->alu_top__DOT__ALUout),32);
    }
    bufp->chgIData(oldp+67,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+68,(vlSelf->RegWrite));
    bufp->chgBit(oldp+69,(vlSelf->ALUsrc));
    bufp->chgBit(oldp+70,(vlSelf->clk));
    bufp->chgBit(oldp+71,(vlSelf->data_mem_WE));
    bufp->chgIData(oldp+72,(vlSelf->data_mem_WD),32);
    bufp->chgCData(oldp+73,(vlSelf->ALUctrl),3);
    bufp->chgIData(oldp+74,(vlSelf->rs1),32);
    bufp->chgIData(oldp+75,(vlSelf->rs2),32);
    bufp->chgIData(oldp+76,(vlSelf->rd),32);
    bufp->chgIData(oldp+77,(vlSelf->a0),32);
    bufp->chgBit(oldp+78,(vlSelf->EQ));
    bufp->chgIData(oldp+79,(vlSelf->alu_top__DOT__reg_file__DOT__regfile
                            [(0x1fU & vlSelf->rs2)]),32);
    bufp->chgIData(oldp+80,(vlSelf->alu_top__DOT__data_mem__DOT__data_mem_register
                            [(0x1fU & vlSelf->alu_top__DOT__ALUout)]),32);
}

void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_cleanup\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
