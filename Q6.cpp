//6. Define a class Square to find the square of a number and write a C++ program to Count 
//number of times a function is called.
#include<iostream>
#include<conio.h>
using namespace std;
class square
{
    static int count;
    int num;
    int result;
    public:
    void set_value(int x)
    {
        num=x;
    }
    int find_square()
    {
        count++;
        result=num*num;
       return result;
    }
    void display()
    {
      cout<<num <<" number square is="<<result<<endl;
    cout<<"then function calling counting is="<<count;
    }
};
int square::count=0;
int main()
{
    square s;
    cout<<"enter a number:-";
    int x;
    cin>>x;
    s.set_value(x);
    s.find_square();
    s.find_square();
    s.display();
    getch();
    return 0;
    
}