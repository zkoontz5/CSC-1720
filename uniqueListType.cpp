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

#include <iostream>
#include <string>
#include "uniqueListType.h"
#include "unorderedArrayListType.h"
 
using namespace std;
 
uniqueListType::uniqueListType(int size)
               :unorderedArrayListType(size)
{

}
 
void uniqueListType::insertAt(int location, string insertItem)
{
    if (unorderedArrayListType::seqSearch(insertItem) == -1)
        unorderedArrayListType::insertAt(location, insertItem);
}
 
void uniqueListType::insertEnd(string insertItem)
{
    if (unorderedArrayListType::seqSearch(insertItem) == -1)
        unorderedArrayListType::insertEnd(insertItem);
}
 
void uniqueListType::replaceAt(int location, string repItem)
{
    if (unorderedArrayListType::seqSearch(repItem) == -1)
        unorderedArrayListType::replaceAt(location, repItem);
}

