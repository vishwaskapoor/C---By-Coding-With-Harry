#include<iostream>
#include<cstdio>
using namespace std;
class Employee
{
    int id;
    static int count;  // now this count is for whole class
public:                // not for a particular oblject in class
    void setData(void)
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData(void);
    static void getCount(void)
    {
        // cout<<id; this will show error bc id is private
        cout<<"The value of count is "<<count<<endl;
    }
};

void Employee :: getData(void)
{
    cout<<"The ID od this employee is "<<id<<"and this is employee no. "<<count<<endl;
}

// Count is the static data member of class Employee
int Employee :: count; //Default value is 0


int main(){
    Employee harry, rohan, lovish;
    // harry.count = 1; // connot do this as id and count are private

    harry.setData();
    harry.getData();


return 0;
}