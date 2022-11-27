// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrisc_v__Syms.h"
#include "Vrisc_v.h"
#include "Vrisc_v___024root.h"

// FUNCTIONS
Vrisc_v__Syms::~Vrisc_v__Syms()
{
}

Vrisc_v__Syms::Vrisc_v__Syms(VerilatedContext* contextp, const char* namep, Vrisc_v* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
