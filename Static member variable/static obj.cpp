#include<iostream>
using namespace std;
class A
{
  int x;
  public:
  void count(int i)
  {
    x=i;
  }
  void display()
  { 
    cout<<"x="<<x<<endl;
  }
  void main()
  {
    static A o;
    o.count();
    o.display();
  }
  
