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


#include <iostream>
#include "unorderedArrayListType.h" 
#include<list>
using namespace std; 

unorderedArrayListType::unorderedArrayListType(int size)
                      : arrayListType(size)
{
}  //end constructor

void unorderedArrayListType::insertAt(int location, int insertItem) 
{
   if (location < 0 || location >= maxSize || location > length)
      cout << "The position of the item to be inserted "
           << "is out of range." << endl;
   else if (length >= maxSize)  //list is full
      cout << "Cannot insert in a full list" << endl;
   else
   {
      for (int i = length; i > location; i--)
         list[i] = list[i - 1];	//move the elements down

      list[location] = insertItem; //insert the item at 
                                   //the specified position

      length++;	//increment the length
   }
} //end insertAt

void unorderedArrayListType::insertEnd(int insertItem)
{
   if (length >= maxSize)  //the list is full
      cout << "Cannot insert in a full list." << endl;
   else
   {
      list[length] = insertItem; //insert the item at the end
      length++; //increment the length
   }
} //end insertEnd

void unorderedArrayListType::insertFirst(int insertItem)
{  
   if (length >= maxSize)
      cout << "Cannot insert in a full list" << endl;
   else
      length++;
         for (int i = length; i > 0; i--)
         list[i] = list[i - 1]; 
      	 list[0]=insertItem;
}

void unorderedArrayListType::replaceAt(int location, int repItem)
{
   if (location < 0 || location >= length)
      cout << "The location of the item to be "
           << "replaced is out of range." << endl;
   else
      list[location] = repItem;
} //end replaceAt

int unorderedArrayListType::seqSearch(int searchItem) const
{
   int loc;
   bool found = false;

   loc = 0;

   while (loc < length && !found)
      if (list[loc] == searchItem)
         found = true;
      else
         loc++;

   if (found)
      return loc;
   else
      return -1;
} //end seqSearch

void unorderedArrayListType::removeAt(int location)
{
   if (location < 0 || location >= maxSize || location > length)
      cout << "The position of the item to be "
           << "insterted is out of range." << endl;
   list[location] = list[length]; 
                                   
   length--; 
   
}

int unorderedArrayListType::findMax()
{
   int max=list[0];
     for(int k=0;k<length;k++)
{
   if(max<=list[k+1])
     {max=list[k+1];}
   }
return max;
}


