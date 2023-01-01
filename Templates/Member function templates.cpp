#include<iostream>
using namespace std;
template <class T>
  class data
  {
    public:
    data (T a);
  };
template <class T>
{
 data <T> :: data (T a)
 {
   cout<<"\n data="<<a;
 }
  void main()
  {
    data <char> h <'h'>;
     data <int> k <200>;
  }
}
