#include<iostream>
#include<fstream.h>
using namespace std;
void main()
{
  ifstream fin;
  fin.open("Country")
  {
    const int size=80;
    char line [size];
    cout<<"Country Name";
    while (fin)
    {
      fin.getline(line,size)
        cout<<line;
    }
    fin.close();
  }
