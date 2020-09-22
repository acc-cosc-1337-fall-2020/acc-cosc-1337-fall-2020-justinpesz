//Write the include statement for decisions.h here
#include "decision.h"
#include<iostream>

//Write namespace using statements for cout and cin
using std::cout;
using std::cin;

int main() 
{
	char yesNo;
	int grade;

	do
	{
		cout<<"Enter numeric grade: ";
		cin>>grade;

		cout<<get_letter_grade_using_if(grade)<<"\n";

		cout<<"Enter another? ";
		cin>>yesNo;

	} while (yesNo == 'y' || yesNo == 'Y');
	
	return 0;
}

