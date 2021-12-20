/*
   Name: Zach Koontz
   Date: 04-10-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab12
   
   To compile, use command:
      g++ -o testOrdered ollTest.cpp
   To execute, use command
      ./testOrdered
*/  

#include <iostream>
#include "orderedLinkedList.h"
 
using namespace std;
 
int main()
{
   orderedLinkedList<int> list1, list2;        
   int num;                                    

   cout << "Creating list with input 77 11 44 99 33 55" << endl ;

   list1.insertLast(77);                      
   list1.insertLast(11);
   list1.insertLast(44);
   list1.insertLast(99);        
   list1.insertLast(33);
   list1.insertLast(55);

   cout << endl;                               

   cout << "list1: ";                  
   list1.print();                             
   cout << endl;                               

   list2 = list1; //test the assignment operator 

   cout << "list2: ";                 
   list2.print();                              
   cout << endl;                              
   
   //Testing deleteLargest
   cout << "Testing Delete Largest Function: " <<endl;
   cout << "Before List2: ";
   list2.print();
   cout << endl;

   list2.deleteLargest();

   cout << "After List2: ";
   list2.print();
   cout << endl;
   
   cout << "Enter the number to be " << "deleted: ";                        
   cin >> num;                               
   cout << endl;                               

   list2.deleteNode(num);                     

   cout << "After deleting " << num << endl;
   cout << "list2: " ;         
   list2.print();                              
   cout<<endl;  

   cout << endl << "Output list1 " << "using an iterator:" << endl;            

   linkedListIterator<int> it;                  

   for (it = list1.begin(); it != list1.end(); ++it)                  
       cout << *it << " ";                        
   cout << endl;          

   return 0;					
}



