#include<iostream>
using namespace std;
int main(){
    string name;  //char = name; this shows only one character
    double amount;
    
    cout<<"Welcome to SBI"<<endl;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Hello Sir/Man "<<name<<" Your current account balance is 2000.00"<<endl;
    cout<<"How much do you want to Withdraw"<<endl;
    cin>>amount;
    cout<<"Thanks For Withdrawal "<<endl;
    cout<<"Your Current Balance Is: "<<endl;
    cout<<2000 - amount;
    if (amount > 2000)
    {
        cout<<" Gareeb, paise dlva le acc m"<<endl;
    }
    else
    {
        cout<<amount<< "so this is it:"<<endl;
    }
    
    
    
    


    
    

return 0;
}