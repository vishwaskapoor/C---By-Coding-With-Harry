//reference variable
#include<iostream>
using namespace std;
int main(){
    float x = 445;
    float   & y = x;
    
    
   // float y = x will work
   // y = x will work if specified y as float 
    cout<<x<<endl;
    cout<<y<<endl;

//*****TYPECASTING**********
    int a = 45;
    float b = 46.46;
    cout<<"the value of a is"<<(float)a<<endl;

    cout<<"the value of b is "<<(int)b<<endl;

    int c = int(b);

    cout<<"the expression is "<<a + b<<endl;

    cout<<"the expression is "<< a + int(b)<<endl;
    
    cout<<"the expression is "<< a + (int)b <<endl;

    cout<<c<<endl;


    return 0;
}