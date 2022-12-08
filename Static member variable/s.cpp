#include<iostream>
using namespace std;
{
  private:
  int x;
  static int y;
  public:
  void getdata(int a)
  {
    x=a;
    y++;
  }
  void putdata()
  {
    cout<<"y="<<y<<endl;
  }
};
  int A::y;
  void main()
  {
    A o1,o2,o3;
    o1.putdata();
    o2.putdata();
    o3.putdata();
    o1.getdata();
    o2.getdata();
    o3.getdata();
  }
