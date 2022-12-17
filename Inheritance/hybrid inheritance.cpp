#include<iostream>
using namespace std;
class student
{
    protected:
    int roll no.;
    char name;
    public:
    void getinfo(int i,int j)
    {
        roll no.=i;
        strcpy(name,j)
    }
};
class marks :protected student
   {

        protected:
        int sub1,sub2;
        public:
        void getmarks(int i,int j,int k,char *x)
     {
        sub1=i;
        sub2=j;
        getinfo(k,x)
      }
 };     
      class sessional
     {
      protected:
        int s1,s2;
        public:
        void gets(int i,int j)
        {
          s1=i,s2=j;
        }
      };     
class result :public marks, public sessional;
  {
    cout<<"Name="<<name<<endl;
    cout<<"Roll no.="<<roll no.<<endl;
    cout<<"Result"<<sub1 + sub2 +s1 +s2;
  }
};
void main()
{
  result o;
  o.getmarks(50.60.101,Amit);
  o.gets(15.20);
  o.result;
}
