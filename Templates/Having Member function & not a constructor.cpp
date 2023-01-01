#include<iostream>
using namespace std;
template <class T>
  class data
  {
    public:
    void data1 (T a)
    };
template <class T>
void data <T> ::data1 (T a)
{
  cout<<"\n data="<<a;
}
void main()
{
  data <char> h;
  data <int> k;
  h.data ('A');
  k.data (10);
}
