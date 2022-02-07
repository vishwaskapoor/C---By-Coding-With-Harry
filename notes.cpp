#include<iostream>
using namespace std;
int main(){
    int a ;
    int b;
    a= 40;
    b = 5;
    cout<< (b = a) ;
    cout<<( a = b);
// using brackets is necessary 

// :: is known as scope resolution operator
 // to call goobal variable
//cout<<"the global var is "<<::a;



return 0;
}