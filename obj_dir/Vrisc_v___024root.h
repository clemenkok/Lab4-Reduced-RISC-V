// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_v.h for the primary calling header

#ifndef VERILATED_VRISC_V___024ROOT_H_
#define VERILATED_VRISC_V___024ROOT_H_  // guard

#include "verilated.h"

class Vrisc_v__Syms;

class Vrisc_v___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(pc_addr,7,0);
    CData/*0:0*/ risc_v__DOT__EQ;
    CData/*2:0*/ risc_v__DOT__ALUctrl;
    CData/*1:0*/ risc_v__DOT__ImmSrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    VL_OUT(instruction,31,0);
    IData/*31:0*/ risc_v__DOT__ImmOp;
    IData/*31:0*/ risc_v__DOT__pc;
    IData/*31:0*/ risc_v__DOT__instr;
    IData/*31:0*/ risc_v__DOT__next_PC;
    IData/*31:0*/ risc_v__DOT__ALUop1;
    IData/*31:0*/ risc_v__DOT__ALUop2;
    VlUnpacked<IData/*31:0*/, 256> risc_v__DOT__my_instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> risc_v__DOT__reg_file__DOT__regfile;
    VlUnpacked<IData/*31:0*/, 256> risc_v__DOT__data_mem__DOT__data_mem_register;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vrisc_v__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrisc_v___024root(Vrisc_v__Syms* symsp, const char* name);
    ~Vrisc_v___024root();
    VL_UNCOPYABLE(Vrisc_v___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
