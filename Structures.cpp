#include<iostream>
using namespace std;
typedef struct Employee
{
    
    int eID;
    char favChar;
    float salary;

} ep;
union money 
{
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
    struct Employee vishwas;
    struct Employee rohandass;
    ep harry;
    vishwas.eID = 1;
    vishwas.favChar = 'V';
    vishwas.salary = 120000;
    cout<<"The value is: "<<vishwas.eID<<endl;
    cout<<"The value is: "<<vishwas.favChar<<endl;
    cout<<"The value is: "<<vishwas.salary<<endl;
    
    money m1 

return 0;
}