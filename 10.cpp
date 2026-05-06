#include<iostream>
using namespace std;

class Shape {

public:

    virtual void area() = 0;
};

class Circle : public Shape {

public:

    void area() {
        float r = 5;

        cout<<"Area of Circle = "<<3.14 * r * r<<endl;
    }
};

class Rectangle : public Shape {

public:

    void area() {
        int l = 4, b = 6;

        cout<<"Area of Rectangle = "<<l * b<<endl;
    }
};

int main() {

    Shape *ptr;

    Circle c;
    Rectangle r;

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}
