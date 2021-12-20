/*
   Name: Zach Koontz
   Date: 2-10-2020
   Class: CSC-1720
   location: zkoontz/csc1720/lab5
   
   How to compile - g++ -Wall autoMain.cpp hybridType.cpp autoType.cpp -o testProg
   Hit Enter
   Then Enter - ./TestProg

*/
#include"hybridType.h"
using namespace std;

//Constructor With Parameters (5)
hybridType::hybridType(double cl, double ce)
{
   if(cl>=0)
      chargeLevel = cl;
    if(ce>=0)
      chargeEfficiency = ce;
}
//setChargeLevel- checks values of setChargeLevel
//Pre-Condition- checks values
//Post-Condition- setChargeLevel updated
void hybridType::setChargeLevel(double cl)
{
   chargeLevel = 0;
   if(cl>=0){
      chargeLevel = cl;
  }
}
//getChargeLevel- prints chargeLevel data
//Pre-Condition- Retrives specs
//Post-Condition- outPuts specs
double hybridType::getChargeLevel()
{
   return chargeLevel;
}
//setChargeEfficiency- checks values of setChargeEfficiency
//Pre-Condition- checks values
//Post-Condition- setChargeEfficiency updated
void hybridType::setChargeEfficiency(double ce)
{
   chargeEfficiency = 0;
   if(ce>=0){
      chargeEfficiency = ce;
  }
}

//getChargeEfficiency- prints chargeEfficiency data
//Pre-Condition- Retrives specs
//Post-Condition- outPuts specs
double hybridType::getChargeEfficiency()
{
   return chargeEfficiency;
}

