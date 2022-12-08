#include<iostream>
using namespace std;
class A
{
  int x;
public:
  A()
    void display();
  };
A:A()
{
x = 6;
}
void A :: display();
{
cout<<"x="<<x;
}
void main()
{
  A o;
  o.display();
}
