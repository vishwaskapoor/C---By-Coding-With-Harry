#include<iostream>
#include<cmath>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int , int); // constructor declaration
    void printnum()
    {
        cout<<"Ypur number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex :: complex(int x,int y) // This is a parameterized constructor as it takes 2 parameter
{
    a = x;
    b = y;

}


int main(){
    //Implicit call
    complex a (4,5);
    a.printnum();

    // Explicit call
    complex b = complex( 10,12);
    b.printnum();



return 0;
}