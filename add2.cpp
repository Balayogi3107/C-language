#include<iostream>
using namespace std;

class Math
{
    int a,b,c;
public:
    Math(int x,int y)
    {
       a=x;
       b=y;
       cout<<"constructor called"<<endl;
    }
    Math(Math &x)
    {
         a = x.a;
         b = x.b;
    }
    void add()
    {
        c = a+b;
        cout<<"Total : "<<c<<endl;
    }

};

int main()
{
    Math s(10,20) ;
    s.add();
    Math o1(s);
    o1.add();

    return 0;

}
