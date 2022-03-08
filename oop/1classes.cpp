#include<iostream>
#include<cstdio>
using namespace std;

class Employee 
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1); //Declaration
        void getData()
        {
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
            cout<<"d: "<<d<<endl;
            cout<<"e: "<<e<<endl;
        }
};
void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}


int main(){
    Employee vishwas; // here vishwas is an object
    // vishwas.a = 134; a is private so error
    vishwas.d = 34;
    vishwas.e = 89;
    vishwas.setData(1,2,3); // used to set data of private
    vishwas.getData(); //getData pre-defined to print all data


return 0;
}
// structure vs classes
// data security 
// use of user defined functions