//4. Define a class LargestNumber and define an instance member function to find the 
 //Largest of three Numbers using the class.
#include<iostream>                                                                 
#include<conio.h>
using namespace std;
class largest_number
{
    int x,y,z,largest;
    public:
    void set_value(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    int largest_num()
    {
        largest=(x>y)?(x>z?x:z):(y>z?y:z);

    }
    void display()
    {
      cout<<"largest number is="<<largest;
    }
};
int main()
{
    largest_number l1;
    cout<<"enter three number:-";
    int x,y,z;
    cin>>x>>y>>z;
    l1.set_value(x,y,z);
    l1.largest_num();
    l1.display();
    getch();

    return 0;
}