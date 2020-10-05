#include "dna.h"
#include<iostream>
#include<string>
#include<iomanip>
//write include statements
using std::cin;
using std::cout;
using std::string;
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int num = 0;
	
	do
	{
		string content = "";

		cout<<"Enter DNA String: ";
		cin>>content;
		
		cout<<"Enter 1 for Get GC Content or 2 Get DNA Complement: ";
		cin>>num;

		if (num == 1)
		{
			double result = get_gc_content(content);

			cout<<result<<"\n";		
		}
		if (num == 2)
		{
			string result = get_dna_complement(content);
			cout<<content<<"\n";
			cout<<result<<"\n";
		}

	}while (num > 0 || num < 3);
	
	return 0;
}