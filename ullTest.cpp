/*
   Name: Zach Koontz
   Date: 04-10-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab12
   
   To compile, use command:
      g++ -o testUnordered ullTest.cpp
   To execute, use command
      ./testUnordered
*/

#include<iostream>
#include"unorderedLinkedList.h"

using namespace std; 
double findAvg(unorderedLinkedList<int> &list);

int main()
{
   unorderedLinkedList<int> listA, listB;          
   int num;                                        

   cout << "Creating list with input 22 7 48 93 14 2 " << endl ;

   listA.insertLast(22);                      
   listA.insertLast(7);
   listA.insertLast(48);
   listA.insertLast(93);        
   listA.insertLast(14);
   listA.insertLast(2);
   
   cout << endl;                                   

   cout << "listA: ";                      
   listA.print();                                  
   cout << endl;                                   

   cout << "Length of listA: " << listA.length() << endl;                 

   listB = listA;	   //test the assignment operator 

   cout << endl;
   cout << "listB: ";                     
   listB.print();                                  
   cout << endl;
   
   //testing find avg function
   cout << "Average of List B: " << findAvg(listB) << endl;
   cout << endl;                                   

   cout << "Length of listB: " << listB.length() << endl;                 

   cout << endl;
   cout << "Enter the number to be " << "deleted: ";                           
   cin >> num;                                     

   listB.deleteNode(num);                          
	
   cout << "After deleting " << num << endl;
   cout << "listB: " ;                     
   listB.print();                                  
   cout << endl;                                

   cout << "Length of listB: " << listB.length() << endl;              
   cout << endl;

   //Testing DeleteLargest 
   cout << "Testing the delete largest function: " <<endl;
   cout << "Before ListB: ";
   listB.print();
   cout << endl;

   listB.deleteLargest();

   cout << "After ListB: ";
   listB.print();
   cout << endl;
   
   cout << "Output listA " << "using an iterator:" << endl;            

   linkedListIterator<int> it;                  

   for (it = listA.begin(); it != listA.end(); ++it)                  
       cout << *it << " ";                        
   cout << endl;

   unorderedLinkedList<char> listC;          
   char x;                                 

   cout << endl << "Creating list with input A K M G ! C " << endl ;

   listC.insertLast('A');                      
   listC.insertLast('K');
   listC.insertLast('M');
   listC.insertLast('G');        
   listC.insertLast('!');
   listC.insertLast('C');
       
   cout << endl;                                   

   cout << "listC: ";                      
   listC.print();                                  
   cout << endl;                                   
   cout << "Length of listC: " << listC.length() << endl;  

   cout<< endl << "Enter the character to be " << "deleted: ";                           
   cin >> x;                                     

   listC.deleteNode(x);                          
	
   cout << "After deleting " << x << endl;
   cout << "listC: " ;                     
   listC.print();                                  
   cout << endl;                         
   return 0;					
}

/*findAvg: Finds the average of all the items in the list  
  Precondition: Intilizes count, average and sum to 0 
  Postcondition: Take sin the values of the list and computes the Average.
*/
double findAvg(unorderedLinkedList<int> &list)
{
   int count = 0;
   double avg = 0.0;
   double sum = 0.0;

   linkedListIterator<int> it = list.begin();
  
   while(it != list.end()){
      count++;
      sum = sum + *it;
      ++it;
   }
   if(count != 0)
      avg = sum/count;

   return avg;

}

