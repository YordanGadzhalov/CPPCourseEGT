#include <iostream>
#include "Account.h"
using namespace std;


Account::Account(double balance){
    if (balance >= 0){
        this->balance = balance;
    }
    else{
        this->balance = 0;
        cout << "Invalid balance." << endl;
    }
}

double Account::getBalance(){
    return this->balance;
}

void Account::credit(double amount){
        this->balance = this->balance + amount;
    }

void Account::debit(double amount){
    if(amount <= this->balance){
        this->balance = this->balance - amount;
    }
    else{
        cerr << "Debit amount exceeded acount balance";
    }
}