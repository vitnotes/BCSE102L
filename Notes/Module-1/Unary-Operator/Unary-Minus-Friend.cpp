#include<iostream>
using namespace std;
class space{
  int x,y,z;
  public:
    void getdata(int a,int b, int c);
    void display();
    friend void operator-(space &s);
};
void space :: getdata(int a,int b,int c){
  x=a;
  y=b;
  z=c;
}
void space :: display(void){
  cout<<x<<" ";
  cout<<y<<" ";
  cout<<z<<"\n";
}
void operator-( space &s){
  s.x=-s.x;
  s.y=-s.y;
  s.z=-s.z;
}
int main(){
  space s;
  s.getdata(10,-20,30);
  cout<<"Before Overloading"<<endl;
  cout<<"S : ";
  s.display();
  -s;
   cout<<"After Overloading"<<endl;
  cout<<"S :";
  s.display();
  return 0;
}

