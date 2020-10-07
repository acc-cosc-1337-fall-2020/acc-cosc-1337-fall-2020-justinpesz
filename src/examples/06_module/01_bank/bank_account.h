//bank_account.h
class BankAccount
{
public:
    int get_balance()const{return balance;}
    void deposit(int amount);

private:
    int balance{0};
};