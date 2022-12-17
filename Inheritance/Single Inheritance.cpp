#include<iostream>
using namespace std;
class A
{
public:
  int x;
  int y;
  void input ()
  {
    x = 20;
    y = 30;
  }
};
class B:public A
{
  int z;
public:
  void input1 ()
  {
    x = 50;
  }
  void display ()
  {
    cout << "\n x=" << x;
    cout << "\n y=" << y;
    cout << "\n z=" << z;
  }
};

int main ()
{
  B o;
  o.input ();
  o.input1 ();
  o.display ();
}
