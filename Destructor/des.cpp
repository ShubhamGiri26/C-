#include<iostream>
using namespace std;
class A
{
  int x;
  public:
  A()
  {
    x=2;
  }
  A(int i)
  {
    x=i;
  }
  ~A();
  void display()
  {
    cout<<"x="<<x<<endl;
  }
  A :: A ~A()
  {
    cout<<"Destructor";
  }
  void main()
  {
    A o1;
    o1.display();
    A o2;
    o2.display();
  }
    
