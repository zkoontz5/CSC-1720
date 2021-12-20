/*
   Name: Zach Koontz
   Date: 03-22-21
   Class: csc1720
   Location: ~zkoontz/csc1720/lab8
   
   To compile, use command:
      g++ -Wall *.cpp -o a.out
   To execute, use command
      ./a.out
*/

#include"arrayListType.h"
#include"unorderedArrayListType.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<list>
#include"uniqueListType.h"

using namespace std;
template<class Type>

void results(unorderedArrayListType<Type>, uniqueListType<Type>, uniqueListType<Type>);
void load(unorderedArrayListType &lstT);


int main()
{
   unorderedArrayListType entries(7000);
   cout<<"ENTRIES"<<endl;
   load(entries);
	
   uniqueListType PS5entries(7000);
   cout<<"PS5 ENTRIES"<<endl;
   load(PS5entries);
	
   uniqueListType prizes(50);
   cout<<"prizes list"<<endl;
   load(prizes);
   displayresults(entries,PS5entries,prizes);	

   return 0;	
}
void load(unorderedArrayListType &lstT)
{
   string file;
   ifstream in;

   cout << "Enter file name:" << endl;
   cin >> file;
   in.open(file);
   if(in.fail()) {
      cerr << "ERROR: Bad file name" << endl;
      exit(1);
   }

   string item;
   in >> item;
   int i = 0;
   while(!in.eof()) {
      lst.insertAt(i,item);
      in >> item;
      i++;
   }}

void displayresults(unorderedArrayListType ent,uniqueListType mainent, uniqueListType prizes)
{
	
   cout<<showpoint<<fixed;	
   cout<<endl;
   cout<<"Items:   "<<setw(40)<<"Winners: "<<endl;
   cout<<prizes.list[0];
   cout.width(50);
   cout<<mainent.list[rand()%mainent.listSize()]<<left<<endl;
	
   for(int i=1;i<prizes.listSize();i++)
      cout<<prizes.list[i];
      cout<<setw(25-prizes.list[i].length())<<right<<ent.list[rand()%ent.listSize()]<<endl;
}	


