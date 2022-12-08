#include<iostream>
using namespace std;
class A
{
  int x;
  public:
    A(){}
    A(int i)
  {
    x=i;
  }
  A(A &o)
  {
    x=o.x;
  }
  void display()
  {
    cout<<"x="<<x<<endl;
  }
};
  void main()
  {
    
    A o1(23);
    o1.display();
    A o2;
    o2=o1;
    o2.display();
    A o3=o2;
    o3.display();
  }
