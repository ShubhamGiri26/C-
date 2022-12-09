#include<iostream>
using namespace std;
class A
{

    public:
    virtual void f(){}
     virtual void A()=0;
};
class B
{

    public:
    void f()
    {
        cout<<"class B"<<endl;
    }
     virtual void f1(){};
};

int main()
{
    A *bptr;
    B obj;
    bptr= &obj;
    bptr->f();
}
