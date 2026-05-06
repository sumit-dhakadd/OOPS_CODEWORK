#include<iostream>
using namespace std;

// Single Inheritance
class A {
public:
    void showA() {
        cout<<"Class A"<<endl;
    }
};

class B : public A {
public:
    void showB() {
        cout<<"Class B"<<endl;
    }
};

// Multiple Inheritance
class C {
public:
    void showC() {
        cout<<"Class C"<<endl;
    }
};

class D : public A, public C {
public:
    void showD() {
        cout<<"Class D"<<endl;
    }
};

// Multilevel Inheritance
class E : public B {
public:
    void showE() {
        cout<<"Class E"<<endl;
    }
};

// Hierarchical Inheritance
class F : public A {
public:
    void showF() {
        cout<<"Class F"<<endl;
    }
};

int main() {

    B obj1;
    obj1.showA();
    obj1.showB();

    D obj2;
    obj2.showA();
    obj2.showC();
    obj2.showD();

    E obj3;
    obj3.showA();
    obj3.showB();
    obj3.showE();

    F obj4;
    obj4.showA();
    obj4.showF();

    return 0;
}
