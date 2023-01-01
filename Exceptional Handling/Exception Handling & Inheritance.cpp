#include<iostream>
using namespace std;
class A
{
  protected:
  char name[15];
  int age;
 };
class B: public A
{
public:
void getdata()
 {
cout<<"Enter name & age :\n";
cin >>name>>age;
 }
void show()
  {
cout<<"\n name="<<name<<"\n age";
  }
};
void main()
{
  try
  {
    B.o;
    o.getdata();
    o.show();
  }
  catch(B)
  {
  cout<<"Wrong data"
  }
}
