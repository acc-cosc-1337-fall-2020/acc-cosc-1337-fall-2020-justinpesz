#include "types.h"
#include<iostream>

//write include statements


//write namespace using statement for cout
using std::cout;
using std::cin;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{	
	int num = 0;
	
	cout<<"Please enter a number: ";
	cin>>num;
	
	int result = multi_numbers(num);
	cout<<result<<"\n";

	int num1 = 4;

	result = multi_numbers(num1);
	cout<<result;

	return 0;
}