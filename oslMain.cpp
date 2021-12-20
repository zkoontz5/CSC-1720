/*
   Name: Zach Koontz
   Date: 03-17-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab9
   
   To compile, use command:
      g++ -Wall arrayListType.cpp orderedArrayListType.cpp oslMain.cpp -o testProg
   To execute, use command
      ./testProg
*/

#include<iostream>
#include<fstream>
#include"orderedArrayListType.h"

using namespace std;

int main()
{
   orderedArrayListType Z(10);
   orderedArrayListType A(10);
   orderedArrayListType C(10);
   orderedArrayListType H(10);
   
   cout << " insert function" <<endl;
   Z.insertAt(0,5);
   Z.insertAt(1,3);
   Z.insertAt(2,2);
   Z.insertEnd(6);
   cout << "Z = ";
   Z.print();
   cout << " " <<endl;
 
   cout << "Search function." << endl;
   if (Z.seqSearch(5))
      cout << "location: "  << Z.seqSearch(5) <<endl;
   cout << " " <<endl;   
   
   cout << "Assignment operator..." <<endl;
   C = Z;
   cout << "Z = ";
   Z.print();
   cout << endl;
   cout << "C = ";
   C.print();
   cout << " " <<endl;
  
   return 0;
}  


     
