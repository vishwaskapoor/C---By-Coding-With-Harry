#include<iostream>
using namespace std;

int sum(int a , int b);
//type-function name(argument);
//int sum(int a , b); --> Not acceptable
//int sum( int a , int b); --> Acceptable
int sum(int ,int);//-->Acceptable
void g(void); 
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1 , num2);
    cout<<"\n";
    g();
    return 0;

// num1 and num2 are actual parameters
// Formal Parameters a and b will be taking values from actual 
// parameters num1 and num2
}
int sum(int a, int b){
    int c = a + b;
    return c;
}
void g(){
    cout<<" \n Hello, Good Morning";
}

// function prototyping is calling a till then non defined function