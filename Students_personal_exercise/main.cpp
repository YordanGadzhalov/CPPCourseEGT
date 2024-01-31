#include <iostream>
#include <string>
#include "Account.cpp"
#include "Student.cpp"
using namespace std;


int main(){

    Account account1(500);
    Account account2(400);
    account1.debit(100);
    cout << account1.getBalance() << endl;
    account1.credit(300);
    cout << account1.getBalance() << endl;


    string name1;
    cin >> name1;


    Student student1;
    student1.SetFirstName(name1);
    cout <<"First name: " <<student1.GetFirstName() << endl;

    Student student2("Yordan", "Gadzhalov", 2230230, 20);
    cout << student2.GetSecondName() << endl;
    


    return 0;
}