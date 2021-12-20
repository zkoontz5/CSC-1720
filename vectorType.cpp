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
#include<math.h>
#include<iomanip>
#include"vectorType.h"

using namespace std;

//Default Constructer
//PostCondition: x = 0, y = 0, z = 0;
vectorType::vectorType()
{
   x = y = z = 0;  
}

//Consturcter 
//PostCondition: x = x_in, y = y_in, z = z_in
vectorType::vectorType(double x_in, double y_in, double z_in)
{
   x = x_in;
   y = y_in;
   z = z_in;
}

//Function to set the point of vector x, y, and z
//Postcondition: x = x_in, y = y_in, z = z_in
void vectorType::setComps(double x_in, double y_in, double z_in)
{
   x = x_in;
   y = y_in;
   z = z_in;
}

//Function to return the vector x
//Postcondition: The vector is returned.
double vectorType::getX()
{
   return x;
}

//Function to return the vector y
//Postcondition: The vector is returned.
double vectorType::getY()
{
   return y;
}

//Function to return the vector z
//Postcondition: The vector is returned.
double vectorType::getZ()
{
   return z;
}

//Function to print out vector 
//Precondition: needs to be an object of vector class
//Postcondition: outputs the vector componets in vector notaion
void vectorType::printVector()const
{
   cout << fixed << showpoint << setprecision(4); 
   cout << "<" << x << "," << y << "," << z << ">";
}

//Function to find the length of the 3D vector
//Postcondition: Length returned
double vectorType::calcMagnitude()const
{
    return sqrt(pow(x, 2)+ pow(y, 2) + pow(z, 2));
}

//Function to scale the instance of a 3D vector
//Postcondition: New vector is returned
vectorType vectorType::scalarMultiply(double factor)const
{  
   vectorType ans;
   ans.x = x * factor;
   ans.y = y * factor;
   ans.z = z * factor;
   return ans;
}

