//write includes statements
#include "loops.h"
#include<iostream>

//write using statements for cin and cout
using std::cin;
using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char yesNo = 'y';
	int num;

	do
	{
		
		cout<<"Enter a number from 1 to 10: ";
		cin>>num;

		if(num < 1 || num > 10)
		{
			cout<<"Invalid Entry!";
		}

		while(num >= 1 && num <= 10)
		{
			cout<<"\nThe factorial of "<<num<<" is "<<factorial(num);
			num = 0;
		}

		cout<<"\nEnter another number? ";
		cin>>yesNo;

	} while (yesNo == 'y' || yesNo == 'Y');
	
	return 0;
}