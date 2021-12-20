/* 
   Author: zkoontz – aka Zachary Koontz 
   Date: 1-19-2021
   Class: CSC-1720
   Code location: zkoontz/csc1720/lab2

   How to compile:
   g++ -Wall counterType.cpp lab2Test.cpp -o testProg

   To execute the test program:
   ./testProg

*/

#include<iostream>

using namespace std;

#ifndef COUNTER_TYPE
#define COUNTER_TYPE

class counterType
{
   private:
      int counter;
    
   public:
      //Constructors 
      counterType();
      counterType(int);
      
      void displayCounter()const;
      void decrementCounter();
      void incrementCounter();
      int getCounter()const;
      void setCounter(int = 0);
      void initializeCounter();
                               
};

#endif    
