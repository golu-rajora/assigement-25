//3. Define a class Factorial and define an instance member function to find the Factorial of a 
//number using class
#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
    int f=1;
    int num;
    public:
    void set_value(int x)
    {
        num=x;
    }
    int find_fact()
    {
        for(int i=1;i<=num;i++)
        f=f*i;
        return f;
    }
    void display()
    {
       cout<<num <<" number factorial is="<<f;  
    }
};
int main()
{
    factorial f1;
    cout<<"enter a number:-";
    int x;
    cin>>x;
    f1.set_value(x);
    f1.find_fact();
    f1.display();
    getch();
    return 0;
    
}