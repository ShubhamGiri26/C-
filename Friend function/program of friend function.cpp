#include<iostream>
using namespace std;
class A
{
  int x,y;
  public:
  void input(int i, int j)
  {
    x=i,y=j;
  }
  friend int max(A);
};
int max(A o)
{
  if (o.x > o.y)
    return o.y;
}
int main()
{
  A obj;
  oy.input (10,15);
  cout<<"Corrector="<< max<<(o(y))
  }
