#include<iostream>
using namespace std;

class CurrencyConverter {

public:

    void convert() {

        int choice;
        float amount;

        cout<<"1. INR to USD"<<endl;
        cout<<"2. USD to INR"<<endl;
        cout<<"Enter Choice : ";
        cin>>choice;

        cout<<"Enter Amount : ";
        cin>>amount;

        switch(choice) {

            case 1:
                cout<<"USD = "<<amount / 83<<endl;
                break;

            case 2:
                cout<<"INR = "<<amount * 83<<endl;
                break;

            default:
                cout<<"Invalid Choice";
        }
    }
};

int main() {

    CurrencyConverter c;

    c.convert();

    return 0;
}
