#include<iostream>
using namespace std;
int main(){
    int a = 10 , b = 2 , c;
    cout<<"the value of ++b is" <<++b <<endl;
    cout<<b <<endl;
    cout<<"the value of --b is"<<--b <<endl;
    cout<<b <<endl;
    
    cout<<"the value of a == b is"<<( a == b)<<endl;
    cout<<"the value of a != b is"<<( a!= b)<<endl;
    cout<<"the value of a >= b is"<<( a >= b)<<endl;
    cout<<"the value of a <= b is"<<( a <= b)<<endl;
    cout<<"the value of a > b is"<<( a > b)<<endl;
    cout<<"the value of a < b is"<<( a < b)<<endl;
    //logical operators
    cout<<"the value of this logical and operator ((a ==b) && (a>b)) is :"<<((a == b) && (a < b))<<endl;
    cout<<"the value of this logical and operator ((a ==b) || (a>b) is :"<<((a == b) || (a < b))<<endl;
    
    cout<<"the value of this logical and operator (!(a ==b)  is :"<<(!(a == b))<<endl;
    return 0;
}