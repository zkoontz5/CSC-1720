/*
   Name: Zach Koontz
   Date: 02-09-2021
   Class: CSC-1720
   Location: ~zkoontz/csc1720/lab5
*/

#include<iostream>
#include"autoType.h"
using namespace std;

#ifndef HYBRID_TYPE
#define HYBRID_TYPE

class hybridType: public autoType{
   private:
      double chargeLevel;
      double chargeEff;
    
   public:
      void setChargeLevel(double cl);
      //setChargeLevel- Sets the chargeLevel with new values
      //Pre-Condition- new value 
      //Post-Condition- setChargeLevel updated

      double getChargeLevel();
      //getChargeLevel- gets specs from setChargeLevel
      //Pre-Condition- Retrives specs
      //Post-Condition- outPuts specs

      void setChargeEfficiency(double ce);
      //setChargeEfficiency- Sets the chargeEfficiency with new values
      //Pre-Condition- new value 
      //Post-Condition- ChargeEfficiency updated

      double getChargeEfficiency();
      //getChargeEfficiency- gets specs from setChargeEfficiency
      //Pre-Condition- Retrives specs
      //Post-Condition- outPuts specs

};

#endif
