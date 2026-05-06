#include<iostream>
using namespace std;

class Number {

    int x;

public:

    Number(int a = 0) {
        x = a;
    }

    Number operator+(Number n) {
        return Number(x + n.x);
    }

    Number operator-(Number n) {
        return Number(x - n.x);
    }

    Number operator++() {
        ++x;
        return Number(x);
    }

    bool operator==(Number n) {
        return x == n.x;
    }

    friend ostream& operator<<(ostream &out, Number n);

};

ostream& operator<<(ostream &out, Number n) {
    out<<n.x;
    return out;
}

int main() {

    Number n1(20), n2(10), n3;

    n3 = n1 + n2;
    cout<<"Addition = "<<n3<<endl;

    n3 = n1 - n2;
    cout<<"Subtraction = "<<n3<<endl;

    ++n1;
    cout<<"Increment = "<<n1<<endl;

    if(n1 == n2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;

    return 0;
}
