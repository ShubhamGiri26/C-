#include<iostream>
using namespace std;
class A
{
  int x,y;
  public:
  A(int ,int);
  void display()
  };
A :: A(int i,int j)
{
  cout<<"Inside Constructor"<<endl;
  x=i,y=j;
}
void A :: display()
{
  cout<<"x="<<x<<endl;
}
void A :: display()
{
  cout<<"x="<<x<<"y="<<y;
}
void main()
{
  A o(2,3);
  o.display();
}
