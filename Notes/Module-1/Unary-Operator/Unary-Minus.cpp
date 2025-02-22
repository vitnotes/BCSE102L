#include<iostream>
using namespace std;
 
class NUM
{
    private:
        int n;
         
    public:
        //function to get number
        void getNum(int x)
        {
            n=x;
        }
        //function to display number
        void dispNum(void)
        {
            cout << "value of n is: " << n;
        }
        //unary - operator overloading
        void operator - ()
        {
            n=-n;
        }
};

int main()
{
    NUM num;
    num.getNum(10);
     num.dispNum();
    -num;
    num.dispNum();
    cout << endl;
    return 0;
     
}
