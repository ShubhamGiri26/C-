#include<iostream.h>
using namespace std;
class T
{
  void test (int x) {
    if(x==0)
      throw x;
      if (x==-1)
        throw 'x';
    if(x==2)
      throw 1.6;
  }
     catch(int i) {
       cout<<"caught integer";
      }
    catch(int y)
    {
      cout<<"caught char";
    }
  catch(float i)
  {
    cout<<"caught float";
  }
  catch(...)
  { 
    cout<<"caught";
    }
  }
 };

int main()
{
  test (0);
  test (-1);
  test (2);
}
