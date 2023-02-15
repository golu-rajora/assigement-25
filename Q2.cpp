//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate 
//number of instance member variables and also define instance member functions to set 
//values for time and display values of time.
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
    int hour;
    int min;
    int sec;

    public:
    void set_value(int x,int y,int z)
    {
        hour=x;
        min=y;
        sec=z;
    }
    void dispaly()
    {
        cout<<"time is="<< hour <<"hr"<< min <<"min"<< sec <<"sec"<<endl;
    }

};
int main()
{
    Time t1;
    cout<<"enter a time hour ,min and sec:-";
    int x,y,z;
    cin>>x>>y>>z;
    t1.set_value(x,y,z);
    t1.dispaly();
    getch();
    return 0;
}