#include<iostream>
using namespace std;
#include<conio.h>
class sample
{
      private:
              int val1, val2;
      public:
             sample(int x,int y);
             void operator --();
             void display();
             };
      sample::sample(int x,int y)
      {
                         val1=x;
                         val2=y;
                         }
      void sample::operator --()
      {
          val1--;
          val2--;
           cout<<"Inside operator overloading function";
           }
      void sample::display()
      {
           cout<<"val1      "<<val1<<endl;
           cout<<"Val2      "<<val2<<endl;
           }
      main()
      {
            sample example(10,20);
            cout<<"Before Overloading"<<endl;
            example.display();
            --example;
            cout<<"After overloading"<<endl;
            example.display();
            getch();
            }
