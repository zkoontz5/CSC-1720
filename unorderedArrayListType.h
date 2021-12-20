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


#ifndef UnorderedArrayList_TYPE
#define UnorderedArrayList_TYPE
   
#include "arrayListType.h" 

class unorderedArrayListType: public arrayListType
{
   public:
      //Constructor
      unorderedArrayListType(int size = 100);

      /* insertAt Function that Inserts an item in the 
         list at the specified location.
         Precondition: Item is entered   
         Postcondition: Item is inserted. 
      */
      void insertAt(int location, int insertItem);
  
      /* insertEnd Function That inserts an item at the end 
         Precondition: Number and location entered 
         Postcondition: Enterted at the end of the list
      */
      void insertEnd(int insertItem);

      /* insertFirst Function Inserts item in list
         Precondition: Item is entered
         Postcondition: Item is inserted 
      */
      
      void insertFirst(int insertItem);
      
      /* replaceAt Function that inserts an item to replace another 
         Precondition: Item enetred 
         Postcondition: Item replaced
      */
      void replaceAt(int location, int repItem);
  
      /* seqSearh Function to search the list for a given item
         Precondition: Searches for location
         Postcondition: Location found and item found 
      */
      int seqSearch(int searchItem) const;

      /* removeAt Function removes elemnts in list by shifting row 
         Precondition: Locatio found and shifted 
         Postcondition: Item removed from location
      */
      void removeAt(int location);
      
      /* findMax Function finds and returns max list value
         Precondition: Searches for item
         Postcondition: Item found a returned  
      */
      int findMax();
}; 

#endif
