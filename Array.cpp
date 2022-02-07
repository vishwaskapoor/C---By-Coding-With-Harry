#include<iostream>
using namespace std;
int main(){
    
    int marks[4] = {23 , 45, 56, 89};
    int phyMarks[4];
    int i = 0;
    //writing 4 in [] is optional
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl; 
    cout<<marks[3]<<endl;
// Another way to write ARRAY

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

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks using for loop  "<<i<<" is "<<marks[i]<<endl;
    }
    
    while ( i < 4)
    {
        cout<<"the value of marks   "<<i<<"  using while loop "<<'  '<<phyMarks[i]<<endl;
        i++;
    }
    
     
return 0;
}
