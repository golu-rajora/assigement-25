//9. Define a class Circle and define an instance member function to find the area of the 
//circle
#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
    int r;
    float result;
    public:
     void set_value(int x)
    {
        r=x;;
    }
    float find_area()
    {
        result=3.14*r*r; 
       return result;  
    }
    void display()
    {
      cout<<"arae of circle is="<<result;
    }
   
};
int main()
{
    circle c;
    int x;
    cout<<"enetr a redious:-";
    cin>>x;
    c.set_value(x);
    c.find_area();
    c.display();
    getch();
    return 0;
}