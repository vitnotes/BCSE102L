#include <iostream>
using namespace std;
#include<conio.h>
class temp
{
   private:
      int count,count2;
   public:
       temp()
	   {  
	   count=5;
	   count2=10;
	   }
      void operator ++() { 
        count=count+1;
		 count2=count2+1;
       }
       void Display() { cout<<"Count: "<<count<<endl;
	    cout<<"Count2: "<<count2; }
};
 main()
{
    temp t;
    t.Display();
    cout<<endl;
   // ++t; 
	  /* operator function void operator ++() is called */
    //int k=8;
    //++k;
   // cout<<"k value"<<k;
   t++;
    t.Display();
   getch();
}
