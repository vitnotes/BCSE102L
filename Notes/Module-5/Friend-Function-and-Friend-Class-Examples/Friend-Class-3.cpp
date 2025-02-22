#include<iostream>
using namespace std;

class Numbers  {     
	int a,b;  
  public:  
  void read()    {  
     cin>>a;  
     cin>>b;    }  
  friend class ArithmeticOperations;  
 };  
 class   ArithmeticOperations  {  
    public:    int c;  
    void add(Numbers num)      {  
       c=num.a+num.b;  
       cout<<"\n\nSum="<<c;       }  
    void sub(Numbers num)       {  
       c=num.a-num.b;  
       cout<<"\n\nDifference is ="<<c;       }  
       void product(Numbers num)      {  
       c=num.a*num.b;  
       cout<<"\n\nProduct ="<<c;       }  
    void divide(Numbers num)       {  
       c=num.a/num.b;  
       cout<<"\n\nQuotient ="<<c;       }  
 }; 
   main()    {  
 int cont;  
 Numbers nums;  
 ArithmeticOperations op;
 nums.read();  
 op.add(nums);  
 op.sub(nums);  
 op.product(nums);  
 op.divide(nums);  
    }  


