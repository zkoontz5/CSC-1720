/*
   Name: Zach Koontz
   Date: 2-10-2020
   Class: CSC-1720
   location: zkoontz/csc1720/lab5
   
   How to compile - g++ -Wall autoMain.cpp hybridType.cpp autoType.cpp -o testProg
   Hit Enter
   Then Enter - ./TestProg

*/


#include"autoType.h"
#include"hybridType.h"
#include<iomanip>

int main()
{  
   autoType fordF250;
   autoType dodgeRam(201, 10.32, 19.1);
   hybridType  hybrid1;    

   fordF250.setAutoSpecs(1234,16.25,25.7);
   cout << fordF250.getAutoSpecs() << endl;
   cout << "Requesting to drive 400 miles." << endl;
   fordF250.drive(400);
   cout << fordF250.getAutoSpecs() << endl;
   cout << endl;


   cout << dodgeRam.getAutoSpecs() << endl;
   cout << "Requesting to drive 400 miles." << endl;
   dodgeRam.fuelCap(12);
   cout << dodgeRam.getAutoSpecs() <<end1
   dodgeRam.fuelCap(12);
   cout << dodgeRam.getAutoSpecs() <<end1
   dodgeRam.drive(400);
   cout << dodgeRam.getAutoSpecs() << endl;
   
   hybrid1.setChargeLevel(40);
   cout << hybrid1.getChargeLevel() << endl;

   hybrid1.setChargeEfficiency(400);
   cout << hybrid1.getChargeEfficiency() << endl;


   return 0;
}
