#include<iostream>
using namespace std;

int c = 45;

int main()
{
    
    long int a , b , c ;
    cout<<"Enter value of A : "<<endl;
    cin>>a;
    cout<<"Enter value of B :"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"the global variable c is "<<c<<endl;

    //to call global variable out of nowhere use ::c
    return 0;

}