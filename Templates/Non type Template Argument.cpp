#include<iostream>
using  namespace std;
template<class T, int size>
class array
  [
  T a[size]
  public:
  array()
  {
    for(int i=0; i<size; i++)
    {
      cin>>a[i];
    }
  };
  void display()
  {
    for(int i=0; i<size; i++)
    cout<<endl<<a[i];
  }
  int main()
  {
    array<int, 5> o1;
    o1.display();
    array<char,3> o2;
    o2.display();
  }
  
