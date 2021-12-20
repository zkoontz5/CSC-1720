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
#include<iomanip>

autoType::autoType(double od_in, double fl_in, double mpg_in, double fc_in)
{
   setAutoSpecs(od_in, fl_in, mpg_in);
   if(fc_in > 0)
      fuelCap = fc_in;
}


void autoType::setAutoSpecs(double od_in, double fl_in, double mpg_in)
{
   odometer=fuelLevel=mpg=0;
   if(od_in > 0)
      odometer = od_in;
   else
      cerr << "Invalid Odometer Entry, Please Try Agian" << endl;
   if(fl_in > 0)
      fuelLevel = fl_in;
   else
      cerr << "Invalid Fuel Level Entry, Please Try Agian" << endl;
   if(mpg_in > 0)
      mpg = mpg_in;
   else
      cerr << "Invalid MPG Entry, Please Try Agian" << endl;
}


string autoType::getAutoSpecs(void)const
{
   ostringstream sout;

   sout << fixed << showpoint << setprecision(2);
   sout << "Miles = " << odometer;
   sout << "Fuel Capacity (Gallons Left) = " << fuelCap; 
   sout << ", Fuel Level = " << fuelLevel;
   sout << ", Efficiency = " << mpg;
   return sout.str();
}

      
void autoType::drive(double distance)
{
   //Determine the max dist you can travel 
   //based on the current fuelLevel.
   //Compare the requested distance to maxDistance
   //to see if that is possible and act accordingly.
   double maxDistance = fuelLevel*mpg; 
   if(distance <= maxDistance) {
      odometer += distance;
      fuelLevel -= distance/mpg;
   } else {
      cerr << "Out of gas after " << maxDistance << " miles." << endl;
      odometer += maxDistance;
      fuelLevel = 0;
   }
}

void autoType::addFuel(double af)
{
   if((fuelLevel+addFuel)>fuelCap)
         fuelLevel = fuelCap;
   else
      fuelLevel = addFuel
}

