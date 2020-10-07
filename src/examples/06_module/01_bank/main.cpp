#include "bank_account.h"
#include<string>
#include<iostream>

int main()
{
	BankAccount account;
	std::cout<<"Balance: "<<account.get_balance();

	return 0;
}