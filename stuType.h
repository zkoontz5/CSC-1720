/*
   Name: Zach Koontz
   Date: 04-28-21
   Class: csc1720
   Location: ~zkoontz/csc1720/prg5
   
   To compile, use command:
      g++ main.cpp -o testProg
   To execute, use command
      ./testProg
*/

#ifndef STUTYPE
#define STUTYPE

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


#define EPSILON 0.0001

using namespace std;

class stuType
{
  private:
    string firstName;
    string lastName;
    double gpa;

  public:

     stuType();

     void setFname(string fname_in);
     /*
      setFname: Sets fname to a given value
      precondition: Passed non empty value
      postcondition: Set as given value 
     */

     void setLname(string lname_in);
     /*
      setLname: Sets fname to a given value
      precondition: Passed non empty value
      postcondition: Set as given value 
     */
     void setgpa(double gpa_in);
     /*
      setgpa: Sets gpa to a given value
      precondition: Passed value greater than or equal to zero
      postcondition: Set as given
     */
     
     double getgpa();
     /*
      getgpa: returns value of gpa
      precondition: value called
      postcondition: value returned  
     */
     
     bool operator==(stuType object);
     /*
      operator==: overloading of operator ==
      precondition: passed object
      postcondition: return true if gpa same, false if not 
     */
 
     bool operator!=(stuType object);
     /*
      operator!=: overloading of operator !=
      precondition: passed object
      postcondition: return true if base object is  same, false if not 
     */
     
     bool operator<(stuType object);
     /*
      operator<: overloading of operator<
      precondition: passed object
      postcondition: return true if object is greater than passed object
                     false if not 
     */
     
     bool operator>(stuType object);
     /*
      operator>: overloading of operator >
      precondition: passed object
      postcondition: values are the same as the passed object
     */
     
     const stuType& operator=(stuType object);
     /*
      operator<<: overloading of operator <<
      precondition: passed object
      postcondition: An ostream object returned to be output 
     */
     
     friend ostream& operator<<(ostream& osObject, const stuType& cObject);
};


stuType::stuType()
{
  firstName = "";
  lastName = "";
  gpa = -1;
}

void stuType::setFname(string fname_in)
{
  if (fname_in != "")
  {
    firstName = fname_in;
  }
}

void stuType::setLname(string lname_in)
{
  if (lname_in != "")
  {
    lastName = lname_in;
  }
}

void stuType::setgpa(double gpa_in)
{
  if (gpa_in >= 0)
  {
    gpa = gpa_in;
  }
}


double stuType::getgpa()
{
  return gpa;
}

bool stuType::operator==(stuType object)
{
  if (abs(gpa - object.gpa) <= EPSILON)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool stuType::operator!=(stuType object)
{
  if (abs(gpa - object.gpa) <= EPSILON)
  {
    return false;
  }
  else
  {
    return true;
  }
}

bool stuType::operator<(stuType object)
{
  if (gpa < object.gpa)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool stuType::operator>(stuType object)
{
  if (gpa > object.gpa)
  {
    return true;
  }
  else
  {
    return false;
  }
}

const stuType& stuType::operator=(stuType object)
{
  string fname, lname;
  double gpa;

  fname = object.firstName;
  lname = object.lastName;
  gpa = object.gpa;

  firstName = fname;
  lastName = lname;
  gpa = gpa;

  return *this;
}

ostream& operator<<(ostream& out, const stuType& input)
{
  out << fixed << showpoint << setprecision(2);
  out << input.firstName << " ";
  out << input.lastName << " ";
  out << input.gpa << " ";

  return out;
}

#endif

