#include <iostream>
using namespace std;
class X
{
    protected:
    int a;
    public:
    void geta(int i)
    {
        a=i;
    }
};
class Y
{
    protected:
    int b;
    public:
    void getb(int i)
   {
     b=i;
   }
};
class Z:public X,Y
{
    public:
    int max()
    {
        if(a>b)
        return a;
    else
    return b;
    }
    Z(int i,int j)
    {
        geta(i);
        getb(j);
    }
};
int main() 
{
  Z o(6,5);
    cout<<"Maximum="<<o.max()<<endl;
    return 0;
}
