#include<iostream>
using namespace std;

class Arithmetic {
public:

    inline int add(int a, int b) {
        return a + b;
    }

    inline int subtract(int a, int b) {
        return a - b;
    }

    inline int multiply(int a, int b) {
        return a * b;
    }

    inline float divide(int a, int b) {
        return (float)a / b;
    }
};

int main() {

    Arithmetic obj;

    cout<<"Addition = "<<obj.add(10, 5)<<endl;
    cout<<"Subtraction = "<<obj.subtract(10, 5)<<endl;
    cout<<"Multiplication = "<<obj.multiply(10, 5)<<endl;
    cout<<"Division = "<<obj.divide(10, 5)<<endl;

    return 0;
}
