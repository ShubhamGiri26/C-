#include<iostream>
using namespace std;
class Sample
{
  public:
  Sample()
  {
    cout<<"Inside Constructor";
  }
  ~ Sample()
  {
    cout<<"\n Inside Destructor";
  }
};
  void main()
  {
    try
    {
      Sample o;
      throw 1;
    }
    catch(int i)
    {
      cout<<"\n Caught Exception";
    }
  }
