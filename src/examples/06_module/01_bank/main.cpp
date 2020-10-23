#include "bank_account.h"
#include<string>
#include<iostream>
#include "checking_account.h"
#include "savings_account.h"


using std::cout;
using std::cin;


int main()
{
	CheckingAccount ca(1000);
	cout<<ca.get_balance()<<"\n";
	
	SavingsAccount sa(500);
	cout<<sa.get_balance()<<"\n";
	
	/*BankAccount account(100, 123173);
	cout<<"Balance: "<<account.get_balance()<<"\n\n";

	BankAccount new_account(0);
	cout<<"Balance: "<<new_account.get_balance()<<"\n";
	
	display_bank_account_data(new_account);

	cout<<"Bank Balance: "<<account.get_bank_balance();
	*/


	return 0;
}