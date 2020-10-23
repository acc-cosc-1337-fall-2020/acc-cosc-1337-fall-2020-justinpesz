//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SEVINGS_ACCOUNT_H

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(int b) : BankAccount(b){}
    int get_balance()const{return BankAccount::balance + 1;}
};

#endif
