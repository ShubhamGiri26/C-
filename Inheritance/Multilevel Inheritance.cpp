#include <iostream>
using namespace std;
class student
{
    protected:
    int roll no.;
    char *name; 
    public:
    int getinfo(int i,int j)
    {
        roll no.=i;
      strcpy(name ,j);
    }
};
class marks
{
    protected:
    int sub1 ,sub2;
    public:
    void getmarks(int i,int j,int x,char *x)
   {
     sub1=i;
      sub2=j;
      getinfo(k,x)
   }
};
class result :public marks
{
    public:
    int result()
    {
       cout<<"Roll No.="<< roll no.<<endl;
       cout<<"Name="<<name<<endl;
       cout<<"Result"<<sub1 + sub2<<endl;
     }
};
int main() 
{
  result o;
     o.getmarks();
     o.result();
    return 0;
}
