#include<iostream>
using namespace std;

inline int Sum(int a , int b){
    return a + b;
}

int main(){
    int a = 35;
    int b = 53;
    cout << " The Sum is : " << Sum(a,b) <<endl;
}
