#include <iostream>
using namespace std;

class temp
{
   private:
      int count;
   public:
       temp()
	   {  
	   count=5;
	   }
      void operator +() { 
        count=count-100; 
       }
       void Display() { cout<<"Count: "<<count; }
};
 main()
{
    temp t;
    //int k=8;
    t.Display();
    cout<<endl;
  	++t; 
  	//cout<<++k;
	//t++;
    t.Display();
   }
