#include "bank_account.h"
#include<string>
#include<iostream>


using std::cout;
using std::cin;


int main()
{
	BankAccount account(100);
	cout<<"Balance: "<<account.get_balance()<<"\n\n";

	BankAccount new_account(0);
	cout<<"Balance: "<<new_account.get_balance()<<"\n";
	
	display_bank_account_data(new_account);

	return 0;
}