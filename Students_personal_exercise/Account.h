class Account {
public:
    Account(double);
    void credit(double);
    void withdraw(double);
    double getBalance();
    void debit(double);      

private:
    double balance;

};