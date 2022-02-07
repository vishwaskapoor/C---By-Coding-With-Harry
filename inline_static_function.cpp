#include<iostream>
using namespace std;
inline int product(int a , int b)
{
    static int c = 0; // This executes only once
    c = c + 1 ; // Next time this function is run , the value of c will be retained
    return a*b + c ;
} // it is not a good practice to use static function and loops with
// inline function and switch case
int main(){
    int a, b;
    cout<<"Enter the value if a and b"<<endl;
    cin >> a >> b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

}