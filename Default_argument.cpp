#include<iostream>
using namespace std;

float moneyRecived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

 
int main(){

int money = 10000;
cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyRecived(money)<<"Rs after 1 year"<<endl;
cout<<"For VIP: If yuou have "<<money<<" Rs in your bank account , you will recive "<<moneyRecived(money, 1.1)<<"Rs after 1 year";

//****constant function****

// int strlen(const char *p){
//  here value of p will not change
// }

return 0;
}