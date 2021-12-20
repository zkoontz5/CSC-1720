/*
   Name: Zach Koontz
   Date: 03-03-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab8
   
   To compile, use command:
      g++ -Wall *.cpp -o a.out
   To execute, use command
      ./a.out
*/
#include"unorderedArrayListType.h"
#include<iostream>
#include<list>
#include<string>
#ifndef UniqueList_TYPE
#define UniqueList_TYPE


class uniqueListType: public unorderedArrayListType
{
    public:
       uniqueListType(int size = 100);
       //constructor

      
       void insertAt(int location, string insert);
       //InsertAt: Function that Inserts an item in the list at the specified location.
       //pre-condition: Item is entered   
       //post-condition: Item is inserted. 
      
       void insertEnd(string insert);
       //InsertsEnd: Function That inserts an item at the end 
       //pre-condition: Number and location entered 
       //post-condition: Enterted at the end of the list
 
       void replaceAt(int location, string replaceItem);
       //replaceAt: Function that inserts an item to replace another 
       //pre-condition: Item enetred 
       //post-condition: Item replaced 
};
#endif
