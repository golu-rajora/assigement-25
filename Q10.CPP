//10. Define a class Area and define instance member functions to find the area of the 
//different shapes like square, rectangle , circle etc
#include<iostream>
#include<conio.h>
using namespace std;
class area
{
   int x,y,result;
    public:
    void set_value(int a,int b=1)
    {
        x=a;
        y=b;
    }
    float find_circle()
    {
       result=3.14*x*x;
       return result;  
    }
    int find_rectangle()
    {
      result=x*y;
       return result;  
    }
    int find_square()
    {
       result=x*x;
       return result;
    }
    void display()
    {
       cout<<"area of="<<result<<endl;
    }
   
};
int main()
{
    area a1,a2,a3;
    cout<<"enter a redious:-";
    double x,y;
    cin>>x;
    a1.set_value(x);
    a1.find_circle();
    a1.display();
    cout<<"enter length and berth:-";
    cin>>x>>y;
    a2.set_value(x,y);
    a2.find_rectangle();
    a2.display();

    cout<<"enter a square number:-";
    float z;
    cin>>z;
    a3.set_value(z);
    a3.find_square();
    a3.display();
    
    getch();
    return 0;


}