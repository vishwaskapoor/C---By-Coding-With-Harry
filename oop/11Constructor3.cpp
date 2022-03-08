#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    

public: 
   
   // int length; 
    Point(int a, int b)
    {
        x = a;
        y = b;

    }
     friend void distance(Point p , Point q);
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    void distance(Point q, Point p)
    {
        double length = sqrt(pow((p.x) - (q.x)  ,2) + pow( (p.y) - (q.y) , 2));
        cout<<"distance between p and q is "<<length<<endl;
    }
    
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(2, 4);
    q.displayPoint();
    
    distance(p, q);    

    return 0;
}
// solve while revising this.