//7. Define a class Greatest and define instance member function to find Largest among 3 
//numbers using classes.
#include<iostream>                                                                 
#include<conio.h>
using namespace std;
class largest
{
    int x,y,z,big;
    public:
    void set_value(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    int largest_num()
    {
        big=(x>y)?(x>z?x:z):(y>z?y:z);

    }
    void display()
    {
      cout<<"largest number is="<<big;
    }
};
int main()
{
   largest l;
    cout<<"enter three number:-";
    int x,y,z;
    cin>>x>>y>>z;
    l.set_value(x,y,z);
    l.largest_num();
    l.display();
    getch();

    return 0;
}
