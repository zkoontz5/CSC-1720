/* Author: Zach Koontz
   Date: 02-02-21
   Class: CSC-1720
   Code location: ~zkoontz/csc1720/lab4
  

   How to compile:
       g++ -Wall lab4Test.cpp vectorType.cpp -o testProg

   How to Execute:
       ./testProg
*/
#include"vectorType.h"

using namespace std;

int main()
{

     vectorType vectorA;
     vectorType vectorB;
     vectorType vectorC;
     vectorType vectorD;
     
     //Demonstrates the use of the set and get functions 
     vectorA.setComps(1);
     cout << vectorA.getX() << endl;
     
     //Demonstrates the use of the set and get functions 
     vectorA.setComps(1,10);
     cout << vectorA.getY() << endl;
     
     //Demonstrates the use of the print, magnitude and scalar function.  
     vectorA.setComps(1,10,8);
     cout << vectorA.getZ() << endl;
     vectorA.printVector();
     vectorA.calcMagnitude();      
     vectorA.scalarMultiply(2);

     cout << "Testing setComps method with values x = 2, y = 3, z = -4" << endl;
	
     vectorA.setComps(2, 3, -4);
	
     cout << "Vector components: x =" << vectorA.getX() 
     << ", y=" << vectorA.getY() << ", z=" << vectorA.getZ() << endl;
     


     return 0;

}

