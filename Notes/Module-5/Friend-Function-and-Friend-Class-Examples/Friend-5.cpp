#include<iostream>
using namespace std;
class Sample
    {
    private:
            int a,b;
            
    public:
            void set()
            {
                    a=100;
                    b=200;
            }   
			friend int compute(Sample s);
			 };
     int compute(Sample s)
    {           
          int r=s.a+s.b;
          return r;     
		  
		  } 
		     
          int main ( )
    {
            Sample s;
            s.set();
            cout << "The result is:" ;
            //call to friend function
            cout<< compute(s);
            getch();               
            return 0;
    }


