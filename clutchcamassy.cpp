// Automatically generated C++ file on Sat Feb  3 23:34:21 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD clutchcamassy.cpp Vclutchcamassy*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vclutchcamassy.h"

extern "C" __declspec(dllexport) void Destroy(Vclutchcamassy *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void clutchcamassy(Vclutchcamassy **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vclutchcamassy;
   (*instance)->clk = data[0].b;
   (*instance)->clch_latch = data[1].b;
   (*instance)->power = data[2].b;

   (*instance)->eval();

   data[3].us = (*instance)->cont_angle;
   data[4].us = (*instance)->clch_angle;
   data[5].b = (*instance)->rc1;
   data[6].b = (*instance)->rc2;
   data[7].b = (*instance)->rc3;
   data[8].b = (*instance)->rc4;
   data[9].b = (*instance)->rc5;
   data[10].b = (*instance)->rc6;
   data[11].b = (*instance)->rc7;
   data[12].b = (*instance)->rc8;
   data[13].b = (*instance)->rc9;
   data[14].b = (*instance)->rc12;
   data[15].b = (*instance)->rl1;
   data[16].b = (*instance)->rl2;
   data[17].b = (*instance)->rl3;
   data[18].b = (*instance)->rl10;
   data[19].b = (*instance)->sccb;
}
