#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
public:
    void setID(void)
    {
        salary = 122;
        cout<<"Enter the id of employee: "<<endl;
        cin>>id;
    }
    void getID(void)
    {
        cout<<"The id of this employee is "<<id<<endl;
    }
};


int main(){
    Employee fb[4];
    for( int i =0; i<4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    


return 0;
}