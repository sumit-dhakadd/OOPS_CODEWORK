#include<iostream>
using namespace std;

class Function_OverLoading{
public:
    Function_OverLoading(){};
    
    void Sum(int a , int b){
        cout << "Sum is :" << a+b <<endl;
    }
    
    void Sum(float a , float b){
        cout << "Sum is :" << a+b <<endl;
    }
    
    void Sum(float a , int b){
        cout << "Sum is :" << a+b <<endl;
    }
    
    void Sum(int a , float b){
        cout << "Sum is :" << a+b <<endl;
    }
    
    void Area(int l , int h){
        cout << "Area of reactangle is : " << l*h <<endl;;
    }
    
    void Area(int l , float h){
        cout << "Area of reactangle is : " << l*h << endl;;
    }
    
    void Area(float l , float h){
        cout << "Area of reactangle is : " << l*h << endl;;
    }
    
    void Area(float l , int h){
        cout << "Area of reactangle is : " << l*h << endl;;
    }
    
    void Volume(int l , int b , int h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(int l , int b , float h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(int l , float b , int h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(float l , int b , int h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(float l , float b , int h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(int l , float b , float h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(float l , int b , float h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
    void Volume(float l , float b , float h){
        cout << "Volume of rectangle :" << l*b*h << endl;
    }
    
};

int main(){
    Function_OverLoading F1;
    cout <<"Sum Function Calling" << endl;
    F1.Sum(1,2);
    cout << endl;
    F1.Sum(1.3f,2);
    cout << endl;
    F1.Sum(1,2.5f);
    cout << endl;
    F1.Sum(1.2f,2.6f);
    cout << endl;
    
    cout <<"Area Function Calling" << endl;
    F1.Area(5,8);
    cout << endl;
    F1.Area(5,8.6f);
    cout << endl;
    F1.Area(5.5f,8);
    cout << endl;
    F1.Area(5.6f,8.3f);
    cout << endl;
    

    cout <<"Volume Function Calling" << endl;
    
    cout << endl;
    F1.Volume(5,7,8);
    cout << endl;
    F1.Volume(5,8,7.3f);
    cout << endl;
    F1.Volume(5,7.6f,8);
    cout << endl;
    F1.Volume(5.9f,7,8);
    cout << endl;
    F1.Volume(5.6f,7.6f,8);
    cout << endl;
    F1.Volume(5.7f,7,8.5f);
    cout << endl;
    F1.Volume(5,7.5f,8.4f);
    cout << endl;
    F1.Volume(5.1f,7.5f,8.4f);
    cout << endl;
  
    
}





