#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"Template display:"<<x;
}
void display (int x)
{
   cout<<"\n Ordinary display:"<<x;
}
int main()
{
    display(100);
    display(2.5);
    display('A'); 
}
