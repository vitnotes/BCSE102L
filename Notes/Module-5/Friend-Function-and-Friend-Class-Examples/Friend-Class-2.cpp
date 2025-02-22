#include<iostream>
using namespace std;
class second;
class first
{
      private:
              int a,b;
      public:
             int multiply()
             {
                 float mul;
                 mul=a*b;
                 return mul;
                 }
             void assign(second s1);
             };
             
      class second
      {
            private:
                    int c;
            public:
                   void setvalue(int x)
                   {
                        c=x;
                        }
                   friend class first;
                   };
            void first::assign(second s1)
            {
                 a=s1.c;
                 b=s1.c;
                 }
            main()
            {
                  first fo;
                  second so;
                  so.setvalue(6);
                  fo.assign(so);
                  cout<<"\n Result="<<fo.multiply();
                  
                  } 
