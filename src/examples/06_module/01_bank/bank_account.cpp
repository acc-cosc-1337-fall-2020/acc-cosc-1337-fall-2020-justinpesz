//bank_account.cpp
#include "bank_account.h"
#include<iostream>

BankAccount::BankAccount(int b, int c) : balance(b), customer_no(c)
{
    bank_balance += balance;
}

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
    
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
    }
    
}

int BankAccount::bank_balance = 0;

void display_bank_account_data(BankAccount b)
{
    b.deposit(50);
    std::cout<<"Balance: "<<b.get_balance()<<"\n";
}