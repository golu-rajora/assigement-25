//5. Define a class ReverseNumber and define an instance member function to find Reverse
//of a Number using class
#include<iostream>
#include<conio.h>
using namespace std;
class reverse_number
{
    int reverse=0;
    int num;
    public:
    void set_value(int x)
    {
        num=x;
    }
   int find_reverse()
   {
       int n=num;
       for(int i=0;n!=0;i++)
       {
         reverse=reverse*10+n%10;
         n=n/10;
       }
       return reverse;
   }
   void display()
   {
       cout<<num<<" number reverse is="<<reverse;
   }
};
int main()
{
    reverse_number r;
    int x;
    cout<<"enter a number:-";
    cin>>x;
    r.set_value(x);
    r.find_reverse();
    r.display();
    getch();
    return 0;
}
