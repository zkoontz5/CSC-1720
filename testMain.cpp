/*
   Name: Zach Koontz
   Date: 02-24-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab7
   
   To compile, use command:
      g++ -Wall arrayListType.cpp unorderedArrayListType.cpp testMain.cpp -o testProg
   To execute, use command
      ./testProg
*/


#include<iostream>
#include"unorderedArrayListType.h"

using namespace std;

int main()
{
   unorderedArrayListType listA;
   

   cout << "Creating list with input 22 7 48 93 14 2 " << endl ;

   listA.insertFirst(22);
   listA.insertFirst(7);
   listA.insertFirst(48);
   listA.insertFirst(93);
   listA.insertFirst(14);
   listA.insertFirst(2);
   listA.print();
   cout << endl;
   cout << "Max = " << 
   listA.findMax() << endl;

   return 0;

}

   
