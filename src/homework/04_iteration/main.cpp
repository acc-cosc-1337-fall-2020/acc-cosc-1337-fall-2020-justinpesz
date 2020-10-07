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
	char num = 0;
	char yesNo = 'y';

	do
	{
		string content = "";

		cout<<"Enter DNA String: ";
		cin>>content;
		
		cout<<"Enter 1 for Get GC Content or 2 Get DNA Complement: ";
		cin>>num;
		
		if (num == '1')
		{
			double result = get_gc_content(content);

			cout<<result<<"\n";		
		}
		else if (num == '2')
		{
			string result = get_dna_complement(content);
			
			cout<<result<<"\n";
		}
		else
		{
			cout<<"Invalid Option\n";
		}	

		cout<<"\nEnter another DNA string? ";
		
		cin>>yesNo;
	
	}while (yesNo == 'y' || yesNo == 'Y');

	return 0;
}