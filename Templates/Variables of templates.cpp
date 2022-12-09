#include<iostream>
using namespace std;
template<class T>
class x
{

    public:
    X(T i)
    {
        cout<<"\n size"<< sizeof(i);
    }
};
int main()
{
    X <int> o1(2);
    X <char> o2('x');
}
