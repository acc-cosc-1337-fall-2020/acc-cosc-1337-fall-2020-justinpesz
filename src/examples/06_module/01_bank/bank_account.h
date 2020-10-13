//bank_account.h
class BankAccount
{
public:
    BankAccount(int b, int c);
    int get_balance()const{return balance;}
    int get_customer_no()const{return customer_no;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}

private:
    int balance;
    static int bank_balance;
    int customer_no;
};

void display_bank_account_data(BankAccount b);