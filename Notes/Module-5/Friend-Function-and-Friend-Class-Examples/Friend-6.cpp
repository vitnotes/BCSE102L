#include<iostream>
using namespace std;
#include<conio.h>
class Two;
class One
{
      int data1;
      public:
             void setdata(int n)
             {
                  data1=n;                  
                  }
                  friend int add(One a,Two b);
                  };
class Two
{
      int data2;
      public:
             void setdata(int n)
             {
                  data2=n;                  
                  }
                  friend int add(One a,Two b);
                  };
                  
    int add(One a,Two b)
      {
          int c;
          c=a.data1+b.data2;
          cout<<"sum of data1 and data2 is:"<<c;
       }
int main( )
          {
                One a;
                Two b;
                a.setdata(10);
                b.setdata(20);
                add(a,b); 
                return 0;
            }


