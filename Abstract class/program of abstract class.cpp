#include<iostream>
using namespace std;
class A
{
  public:
  void show()
  {
    cout<<"class base"<< endl;
  }
};
class B:public A
{
public:
void display()
 {
cout<<"class derived\n"<<endl;
 }
];
int main()
{
B o1;
o.show();
o.display();
}
