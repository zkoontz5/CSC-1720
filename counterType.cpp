/* 
   Author: zkoontz – aka Zachary Koontz 
   Date: 1-19-2021
   Class: CSC-1720
   Code location: zkoontz/csc1720/lab2

   How to compile:
   g++ -Wall counterType.cpp lab2Test.cpp -o testProg

   To execute the test program:
   ./testProg

*/


#include"counterType.h"

//Default Constructor:
//Increments counter to 0.
counterType::counterType()
{
   counter = 0;
}

//Constructor:
//Sets perameters to counter_in;
counterType::counterType(int counter_in)
{
   counter = counter_in;
}

//DisplayCounter:
//Prints out the counter to the screen.
void counterType::displayCounter()const
{
   cout << counter << endl;
}

//Increment Counter:
//Pre-Condition: Counter is read in to the increment function.
//Post-Condition: Counter is incremented by one. 
void counterType::incrementCounter()
{
   counter = counter+1;
}

//Decremnt Counter:
//Pre-Condition: Counter is read in to the decrement function.
//Post-Condition: Counter is decremented by one. 
void counterType::decrementCounter()
{
   if (counter > 0){
    counter = counter-1;

    }
}

//Get Counter.
//Returns counter.
int counterType::getCounter()const
{
   return counter;
}

//Set Counter:
//Sets counter to counter_in.
void counterType::setCounter(int counter_in)
{
   counter = counter_in;
}

//Intiliaze Counter:
//Intializes counter to 0.
void counterType::initializeCounter()
{
   counter = 0;
}

