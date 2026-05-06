#include<iostream>
using namespace std;

class Parent {
public:

    virtual void display() {
        cout<<"Parent Class Function"<<endl;
    }
};

class Child : public Parent {
public:

    void display() override {
        cout<<"Child Class Function"<<endl;
    }
};

int main() {

    Parent *ptr;

    Child c;

    ptr = &c;

    ptr->display();

    return 0;
}
