#include<iostream>
using namespace std;

class X {

	int a;
public:
	friend void friendOfX(X x);
	
};
void friendOfX(X x) 
{
	x.a = 100; 
	cout<<x.a;
}
int main() {
	X x1;
	friendOfX(x1) ; //call to friend function
	return 0;
} 

