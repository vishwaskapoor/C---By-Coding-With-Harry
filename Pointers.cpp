//Pointers and Arrays:
#include<iostream>

using namespace std;
int main(){
    
    int marks[5] = {45 , 52 , 69 , 6969};
    int * p = marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    // cout<<"the value of marks[4] is "<<*(p+4)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
// agar apan allot na kre fir bhi cout likh de like last wala type toh program humko 0 as ans de dega


    return 0;
}