#include<iostream>
using namespace std;

class Engine {

public:

    void showEngine() {
        cout<<"Engine is Working"<<endl;
    }
};

class Car {

    Engine e;

public:

    void display() {
        cout<<"Car Details"<<endl;
        e.showEngine();
    }
};

int main() {

    Car c;

    c.display();

    return 0;
}
