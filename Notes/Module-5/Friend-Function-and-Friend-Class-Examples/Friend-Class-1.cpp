#include<iostream>
using namespace std;
class  Alpha
{
private:
	int data1;
public:
     Alpha() : data1(99) { }   //constructor
     friend class Beta;        //Beta is a friend class
   };
class Beta
{ 
int data2;	//all member functions can access private Alpha data	
public: 
Beta() : data2(100){ }
void func1(Alpha a) 
{ 
cout << "\ndata1=" << a.data1; 
}

void func2(Alpha a) 
{ cout << "\ndata1=" << a.data1; 
}
};
int main()
{
	Alpha a;
	Beta b;
	b.func1(a);
	b.func2(a);
	return 0;
}

