#include <iostream>
using namespace std;
class time
{
    int hr,min;
    public:
    void input(int,int);
    void display();
    void sum(time,time);
};
void time::input{int i,int j}
{
    hr=i;
    min=j;
}
void time:: display()
{
    cout<<"hour="<<hr<<endl;
    cout<<"minute="<<min<<endl;
}
void time::sum(time t1,time t2)
{
    min=t1 min+ t2 min; 
    hr=min/60;
    min=min % 60;
    hr=hr+t2.hr+ t1.hr;
}
int main()
{
    time o1,o2;
    o1.input(5,40);
    o1.display();
    o2.input(9,30);
    o2.display();
    time o3;
    o3.sum(o1,o2);
    o3.sum(o1,o2);
    o3.display();
}
