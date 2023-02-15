//8. Define a class Rectangle and define an instance member function to find the area of the 
//rectangle.
#include<iostream>
#include<conio.h>
using namespace std;
class restangle
{
    int l,b,result;
    public:
    void set_value(int x,int y)
    {
        l=x;
        b=y;
    }
    int find_area()
    {
        result=l*b;
       return result;  
    }
     void display()
    {
      cout<<"arae of restangle is="<<result;
    }
   
};
int main()
{
    restangle r;
    int x,y;
    cout<<"enetr length and berteh:-";
    cin>>x>>y;
    r.set_value(x,y);
    r.find_area();
    r.display();
    getch();
    return 0;
}