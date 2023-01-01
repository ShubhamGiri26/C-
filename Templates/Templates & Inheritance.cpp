#include<iostream>
using namespace std;
template <class T>
  class one 
  {
    protected:
    T x,y;
    public:
    void display()
    {
      cout<<"\n"<<x<<endl<<y;
    }
  };
template <class T>
  class two: public one<T>
  {
  T z;
  public:
  two(T a, T b, T c)
  {
  x=a;
  y=b;
  z=c;
  }
  void show()
  {
  cout<<"\n"<<x;
  }
  };
void main()
{
  two <int> o (2,4,5)
    o.display();
    o.show();
}
