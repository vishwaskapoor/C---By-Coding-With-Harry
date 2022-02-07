#include<iostream>
using namespace std;
int sum(int a , int b ){
    int c = a + b;
    return c ;
}

// This will not swap a and b
void swap(int a , int b ){ //temp a b
    int temp = a;         // 4    4 5
    a = b;                // 4    5 5
    b = temp;             // 4    5 4
}
// Call be reference using pointers
void swapPointer(int* a , int* b){ //temp a b
    int temp = *a;                //4     4 5
    *a = *b;                      //4     5 4
    *b = temp;                   // 4     5 4
}

//call by reference using C++ reference Variables

// void swapReferenceVar(int &a , int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
int & swapReferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){
    int x = 4 , y = 5;
    //cout<<"The sum of 4 and 5 is "<<sum(a , b);

    cout<<"the sum x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer( &x , &y );
    cout<<"the sum of x is  "<<x<<" and the value of y is "<<y<<endl;

   // swapReferenceVar(x , y);
   // cout<<"the sum x is "<<x<<" and the value of y is "<<y<<endl;

    swapReferenceVar( x,  y ) = 766; //this will swap a and b using reference variables
    cout<<"the value of x is "<<x<<" and the value fo y is "<<y<<endl;





return 0;
}
