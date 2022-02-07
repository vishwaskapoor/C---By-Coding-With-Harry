#include<iostream>
using namespace std;

int main(){
    
    int age;

    cout<<"Tell me your age, DUMBASS::"<<endl;

    cin>>age;
//selection contril structure If else If  else ladder
    if (age<18){
        cout<<"you are restricted to this content"<<endl;

    }
    else if (age == 18){
        cout<<"acting mature,huh"<<endl;
    }
    else if ((age > 18) && (age < 30) ) {
        cout<<"han han dekhlo"<<endl;
    }
    else {
        cout<<"y teri umar nhi h dkhne ki!!!bhaag"<<endl;   
    }    
main();





    return 0;
}