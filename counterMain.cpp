/* Name: Zach Koontz
   Date: 1-26-2021
   Class: CSC-1720
   Location: ~zkoontz/csc1720/prg1

   How to compile:
   g++ -Wall counterMain.cpp counterType.cpp 
*/

#include<iostream>
#include"counterType.h"
#include<string>
#include<fstream>

using namespace std;

#define MAX 10000

string fileIns(string file);

int main()

{

   //FIle input(User entering file to be read in)
   string file;
   cout<<"Input File: ";
   cin>>file;

   
   //Intizlizing objects of class CounterType
   counterType character,vowel,pres,words,nwords;
   
   character.initializeCounter();
   vowels.initializeCounter();
   pres.initializeCounter();
   words.initializeCounter();
   nwords.initializeCounter();

   //Using tolower converting between lower and upper case 
   string book = fileIns(file);
   for(int i=0; i<MAX;i++)
   {
	if(tolower(book[i]) == 'a' || tolower(book[i]) == 'e' 
	|| tolower(book[i]) == 'i' || tolower(book[i]) == 'o' 
        || tolower(book[i]) == 'u') {
	
        vowel.incrementCounter();
	
        }
	   if (book[i] == '.')
	{
	   pres.incrementCounter();
	}

}
   //Displaying counted information
   cout<<"Text: "<< file << endl;
   cout <<"Characters: " ;
   cout<<book.length()<<endl;
   cout<<"Vowels: ";
   vowel.displayCounter();
   cout<<endl;   
   cout<<"Sentences: ";
   pres.displayCounter();
   cout<<endl;

   return 0;
}

   string fileIns(string file)
{

   //Reading in data from the data file
   //Precondition: Data is intilaized
   //Postcondition: Data has been read into the compiler 
   ifstream in;
   in.open(file);
   if(in.fail()){
	cerr<<"Invalid File"<<endl;
	exit(1);
   }

   string passage,line;
   while(in)
   {
      getline(in,line);
      passage+=line;
   }
  
   in.close();
   return passage;
}
