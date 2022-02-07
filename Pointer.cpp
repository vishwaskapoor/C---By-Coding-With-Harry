#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int* b = &a;
    //What is a pointer? ---> data type which holds the address of other data types


    // & -----> (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ----> (Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl; // b stores the value of address of a
                                                  //dereference means value stored at 0x61ff08


// kisi variable se phle * lga do to value milti hai
// ksis variable se phle & lga do to uska address mil jata h 
// pointers and dereference done


return 0;
}