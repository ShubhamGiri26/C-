#include<iostream.h>
using namespace std;
  int main()
  {
    int x=5, y=0,z;
    {
      try{
      if (y==0)
        throw y;
      else {
        z=x/y;
        cout<<"z="<<z;
      }
    }
    catch(int y)
    {
      cout<<"z=0 exception caught";
      }
    }
  }
