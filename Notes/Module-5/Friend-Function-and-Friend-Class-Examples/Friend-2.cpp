#include<iostream>
using namespace std;
class Customer
{
friend void displayAsAFriend(Customer cust);
private:
int custNum;
double balanceDue;
public:
Customer(int = 0, double = 0.0);
void displayCustomer();
};
Customer::Customer(int num, double balance)
{
custNum = num;
balanceDue = balance;
}
void Customer::displayCustomer()
{
cout << "In the member function" << endl;
cout << "Customer #" << custNum <<
" has a balance of $" << balanceDue << endl;
}
void displayAsAFriend(Customer cust)
{
	cout<<endl;
cout << "In the friend function:" << endl;
cout << "Customer #" << cust.custNum <<
" has a balance of $" <<cust.balanceDue << endl;
}

int main()
{
Customer one(3815, 259.25);
one.displayCustomer();
displayAsAFriend(one);
return 0;
}

