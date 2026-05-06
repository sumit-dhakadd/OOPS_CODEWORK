#include<iostream>
using namespace std;

class Simple_Interest{
    int Amount;
    float rate;
    float year;
public:
    
    Simple_Interest(int Amount = 0 , float rate = 0.0f , float year = 0.0f){
        this -> Amount = Amount;
        this -> rate = rate;
        this -> year = year;
    }
    
    void Show_Interest(){
        int interest = (Amount*rate*year);
        cout << "Interest : " << interest <<endl;
    }
};


int main(){
    Simple_Interest S1(1000,2.5,1.5);
    Simple_Interest S2(1000,2,1);
    
    S1.Show_Interest();
    S2.Show_Interest();
}
