#include<iostream>
using namespace std;
template<class T,class S>
class test
{
    T x;
    S y;
    public:
    test(T i,S j)
    {
 
        x=i,y=j;
    }
    void display()
    {
      cout <<"\n x=" <<x;
        cout<<"\n y="<<y;
    }
};

int main()
{
    test<int,char> o1(2,'x');
    o1.display();
}
