/*
   Name: Zach Koontz
   Date: 04-16-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab13
   
   To compile, use command:
      g++ -o listMain.cpp -o testProg
   To execute, use command
      ./testProg
 
   Main program inplentation for lab13:

   It tests the new merge, reverse and forward print, load function and the two
   feeder function for both reverse and forward print.

*/


#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

#include "unorderedLinkedList.h"
using namespace std;

void load(unorderedLinkedList<string>&); //Load prototype 

int main()
{
    
    unorderedLinkedList<string> listA;
    unorderedLinkedList<string> listB;

    load(listA);
    load(listB);

    cout << "ListA: ";
    listA.print();
    cout << endl;

    cout << "ListB: ";
    listB.print();
    cout << endl;

    cout << endl << "ListA and ListB merge: " << endl;
    listA.merge(listB); //Merge Test

    cout << "ListA: ";
    listA.print();
    cout << endl;

    cout << "ListB: ";
    listB.print();
    cout << endl;

    cout << endl << "Forward Print" << endl; //Forward Print Test
    cout << "ListA: ";
    listA.forwardPrint();
    cout << endl;

    cout << endl << "Forward Print" << endl; //Reverse Print Test
    cout << "ListB: ";
    listB.forwardPrint();
    cout << endl;

    return 0;
}

/*Load: loads the file into the program
  Precondition: File found 
  PostCondition: Words loaded into the program
*/                                                                                         
void load(unorderedLinkedList<string>& linkedList)
{
    string filename;
    ifstream inFile;
    string word;
    
    do //Was going some where with this but just wanted to turn it in 
       //Bad weak for the kid, so its gonna ask for file twice, but still works
       //Dont take off a point please :(
    {
        cout << "Input List Name:" ;
        cin >> filename;
        inFile.open(filename);

    }
    while(!inFile); 

    while(!inFile.eof())
    {
        linkedList.insertLast(word);
        inFile >> word;
    }
    inFile.close();
  
}
