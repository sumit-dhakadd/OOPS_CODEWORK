#include<iostream>
using namespace std;

class Demo {

    int x;

public:


    Demo() {
        x = 0;
        cout<<"Default Constructor"<<endl;
    }


    Demo(int a) {
        x = a;
        cout<<"Parameterized Constructor"<<endl;
    }

    Demo(int a, int b) {
        x = a + b;
        cout<<"Overloaded Constructor"<<endl;
    }

    Demo(Demo &d) {
        x = d.x;
        cout<<"Copy Constructor"<<endl;
    }

    void display() {
        cout<<"Value = "<<x<<endl;
    }
};

int main() {

    Demo d1;
    d1.display();

    Demo d2(10);
    d2.display();

    Demo d3(10, 20);
    d3.display();

    Demo d4(d2);
    d4.display();

    return 0;
}
