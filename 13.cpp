#include<iostream>
using namespace std;

class Bank {

    int accNo;
    string name;
    float balance;

public:

    void createAccount() {

        accNo = 101;
        name = "Rahul";
        balance = 5000;

        cout<<"Account Created Successfully"<<endl;
    }

    void deposit(float amount) {

        balance += amount;

        cout<<"Deposited Amount = "<<amount<<endl;
    }

    void withdraw(float amount) {

        if(amount <= balance) {

            balance -= amount;

            cout<<"Withdrawn Amount = "<<amount<<endl;
        }
        else {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    void display() {

        cout<<"Account Number = "<<accNo<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Balance = "<<balance<<endl;
    }
};

int main() {

    Bank b;

    b.createAccount();

    b.deposit(2000);

    b.withdraw(1000);

    b.display();

    return 0;
}
