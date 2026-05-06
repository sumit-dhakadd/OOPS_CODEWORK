#include<iostream>
using namespace std;

class Interest {
public:

    float simpleInterest(float p, float r = 5, float t = 2) {
        return (p * r * t) / 100;
    }
};

int main() {

    Interest obj;

    cout<<"SI = "<<obj.simpleInterest(1000)<<endl;

    cout<<"SI = "<<obj.simpleInterest(1000, 10)<<endl;

    cout<<"SI = "<<obj.simpleInterest(1000, 10, 5)<<endl;

    return 0;
}
