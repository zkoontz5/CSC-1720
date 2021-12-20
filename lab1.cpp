/* 
   Author: zkoontz – aka Zachary Koontz 
   Date: 1-12-2021
   Class: CSC-1720
   Code location: zkoontz/csc1720/lab1/playerType.cpp

   To compile:
      g++ -Wall playerType.cpp
      
      ./a.out < playerDB

*/

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;


//Struct playerType
struct playerType {
   
   string name;
   string pos;
   int GP;
   int G;
   int SH;
   int mins;
};

//Declaring Array of 30
#define MAX 30

//Function Prototypes
void loadData(playerType P[], int &n);
void printData(playerType P[], int n);

int main()
{
   playerType playerDB[MAX];
   int n;

   loadData(playerDB, n);
   printData(playerDB, n);

   return 0;
}

// loadData- loads data from the data file to the compiler.
// precondition- load cin's to the playerDB file  
// postcondition- The data in playerDB is processedd until EOF  
  
void loadData(playerType P[], int &cnt)
{
   cnt = 0;
   string name;
   string pos;
   int GP;
   int G;
   int SH;
   int mins;

   cin >> name >> pos >> GP >> G
       >> SH >> mins;
   while(!cin.eof() && cnt < MAX) {  //Proccessing EOF
      P[cnt].name = name;
      P[cnt].pos = pos;
      P[cnt].GP = GP;
      P[cnt].G = G;
      P[cnt].SH = SH;
      P[cnt].mins = mins;
      cnt++;
      cin >> name >> pos >> GP >> G
          >> SH >> mins;
   }
}

// printData - prints data loaded in from the loadData function  
// precondition- Each spec is laoded into the compiler  
// postcondition- The print fucntion then dumps sorted info onto the screen 
// and calculates the shot percentage at the end  

void printData(playerType P[], int n)
{
   cout << fixed << showpoint;
   cout << left << setw(10) << "Name";
   cout << left << setw(10) << "Position";
   cout << right << setw(5) << "GP";
   cout << right << setw(5) << "G";
   cout << right << setw(5) << "SH";
   cout << right << setw(13) << "Minutes" << endl;
   
   for(int i=0;i<n;i++) {
      cout << left << setw(10) << P[i].name;
      cout << left << setw(10) << P[i].pos;
      cout << right << setw(5) << P[i].GP;
      cout << right << setw(5) << P[i].G;
      cout << right << setw(5) << P[i].SH;
      cout << right << setw(10) << P[i].mins;
      cout << right << setw(13) << setprecision(2) <<
      ((double)P[i].G/(double)P[i].SH) * 100;
      cout << endl;

   }
}

