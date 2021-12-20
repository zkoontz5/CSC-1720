/*
   Name: Zach Koontz
   Date: 04-28-21
   Class: csc1720
   Location: ~zkoontz/csc1720/prg5
   
   To compile, use command:
      g++ main.cpp -o testProg
   To execute, use command
      ./testProg

   prg5 Descrpiton: 
   
   Program to merge two list of junior and senior names and gpa's together
   and then the program finds the average of all the gpa's put together. 
*/

#include "stuType.h"
#include "linkedList.h"
#include "orderedLinkedList.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

//Load Prototype
void load(orderedLinkedList<stuType>& list);

//Average Prototype
void findAvg(orderedLinkedList<stuType> list);

int main()
{
  orderedLinkedList<stuType> listA;
  orderedLinkedList<stuType> listB;

  load(listA); //testing Load fuction
  load(listB); //testing Load function
  cout << endl;

  cout << "Merged Lists: ";
  listA.merge(listB); //testing merge 
  listA.reversePrint(); //testign reversePrint 
  cout << endl;

  findAvg(listA); //testing findAvg 

  return 0;
}

/*Load: loads the file into the program
  Precondition: File found 
  PostCondition: FileName loaded into the program
*/   
void load(orderedLinkedList<stuType>& list)
{
  ifstream in;
  bool good  = false;
  string fileName;
  stuType temp;
  string nameF, nameL;
  double gpA;

  while (good == false)
  {
    cout << "Enter file Name: " << endl;
    cin >> fileName;
    try
    {
      in.open(fileName);
      if (!in)
      {
        throw string("Invalid file name.");
      }
      else
      {
        good  = true;
      }
    }
    catch (string error)
    {
      cout << "Error: " << error << endl;
    }
  }

  in >> nameF;
  in >> nameL;
  in >> gpA;
  temp.setFname(nameF);
  temp.setLname(nameL);
  temp.setgpa(gpA);
  list.insertLast(temp);
  while (!in.eof())
  {
    in >> nameF;
    in >> nameL;
    in >> gpA;
    temp.setFname(nameF);
    temp.setLname(nameL);
    temp.setgpa(gpA);
    list.insertLast(temp);
  }

  in.close();
}

/*findAvg: Finds the average of all the items in the list  
  Precondition: Intilizes count, average and sum to 0 
  Postcondition: Take sin the values of the list and computes the Average.
*/
void findAvg(orderedLinkedList<stuType> list)
{
  double total = 0 ,  count = 0;
  linkedListIterator<stuType> i;

  for (i = list.begin(); i != list.end(); ++i)
  {
    total += (*i).getgpa();
    count++;
  }

  cout << fixed << showpoint << setprecision(2);
  cout << "Avergae of all GPA's: " << total / count << endl;
}

