#include<iostream>
using namespace std;

class Calculation {
public:

    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }

    float area(float r) {
        return 3.14 * r * r;
    }

    int area(int l, int b) {
        return l * b;
    }

    int volume(int s) {
        return s * s * s;
    }

    int volume(int l, int b, int h) {
        return l * b * h;
    }
};

int main() {

    Calculation obj;

    cout<<"Sum = "<<obj.sum(10, 20)<<endl;
    cout<<"Sum = "<<obj.sum(10, 20, 30)<<endl;

    cout<<"Area of Circle = "<<obj.area(5.0f)<<endl;
    cout<<"Area of Rectangle = "<<obj.area(4, 6)<<endl;

    cout<<"Volume of Cube = "<<obj.volume(3)<<endl;
    cout<<"Volume of Cuboid = "<<obj.volume(2, 3, 4)<<endl;

    return 0;
}
