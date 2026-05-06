#include<iostream>
using namespace std;

class Dynamic {

    int num;

public:

    Dynamic(int x) {
        num = x;
    }

    void display() {
        cout<<"Value = "<<num<<endl;
    }
};

int main() {

    int value = 50;

    Dynamic obj(value);

    obj.display();

    return 0;
}
