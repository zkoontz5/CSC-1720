/* Author: Zach Koontz
   Date: 02-02-21
   Class: CSC-1720
   Code location: ~zkoontz/csc1720/lab4
  

   How to compile:
       g++ -Wall lab4Test.cpp vectorType.cpp -o testProg

   How to Execute:
       ./testProg
*/

#include<iostream>

using namespace std;

#ifndef VECTOR_TYPE
#define VECTOR_TYPE

class vectorType

{
   private:
      double x;
      double y;
      double z;
   
   public:
      vectorType();
      vectorType(double, double, double);
      void setComps(double =0, double =0, double =0);
      double getX();
      double getY();
      double getZ();
      void printVector()const; 
      double calcMagnitude(void)const;
      vectorType scalarMultiply(double)const;

};

#endif
