#include<iostream>
using namespace std;
int main(){
    int i;
    int phyMarks[4];
    phyMarks[0] = 32;
    phyMarks[1] = 48;
    phyMarks[2] = 89;
    phyMarks[3] = 79;
    cout<<"These are Physics marks "<<endl;
    cout<<phyMarks[0]<<endl;
    cout<<phyMarks[1]<<endl;
    cout<<phyMarks[2]<<endl;
   // to change the value of an array
    phyMarks[3] = 100;
    cout<<phyMarks[3]<<endl; 
    cout<<"hello world\n";
    while ( i < 4)
    {
        cout<<"the value of marks"<<i<<"using while loop "<<'  '<<phyMarks[i]<<endl;
        i++;
    }

    do
    {
        cout<<"the value of marks"<<i<<"using  do while loop "<<phyMarks[i]<<endl;
        i++;
    } while (i < 4);
    


























return 0;
}