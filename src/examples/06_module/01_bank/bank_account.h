//bank_account.h
class BankAccount
{
public:
    BankAccount(int b) : balance(b){}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance;
};

void display_bank_account_data(BankAccount b);