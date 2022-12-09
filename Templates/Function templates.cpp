#include<iostream>
using namespace std;
template<class T>
void sum(T x,T y)
{
    cout<<"T sum="<<x+y;
}
int main()
{
    sum(2,3);
}
