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

		cout<<"Letter grade using if statement: "<<get_letter_grade_using_if(grade)<<"\n";
		cout<<"Letter grade using switch statement: "<<get_letter_grade_using_switch(convert_number_grade(grade))<<"\n";

		cout<<"Enter another? ";
		cin>>yesNo;

	} while (yesNo == 'y' || yesNo == 'Y');
	
	return 0;
}

