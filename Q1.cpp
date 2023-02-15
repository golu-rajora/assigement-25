//1. Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex number
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int real;
    int imaginary;

    public:
    void set_value(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    void get_value()
    {
        cout<<"complex number is:-"<<real<<"+"<<imaginary<<"i"<<endl;
    }

};
int main()
{
    complex c;
    cout<<"enter two number number:-";
    int x,y;
    cin>>x>>y;
    c.set_value(x,y);
    c.get_value();
    getch();
    return 0;
}
