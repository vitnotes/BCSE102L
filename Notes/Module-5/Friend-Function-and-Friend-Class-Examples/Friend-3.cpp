#include<iostream>
#include<conio.h>
using namespace std;
class Square;
class Rectangle {
    int width, height;
  public:
     Rectangle(int w=1, int h=1) 
	 { 
	 width=w;
	 height=h; 
	 }
    int area()       
	{
	 return(width * height);
	 }
    void convert(Square & );
	void print()
	{ 
	  cout<<width <<"   "<<height<<endl; 
	}
};
class Square
{
  private:
    int side;
  public:
         Square(int a=1) 
		 { 
		   side=a; 
		 } 
    void setSide (int a)
      {
   	   side=a;
	  }
    friend void Rectangle::convert(Square &);
};
void Rectangle::convert (Square &a) 
{
  width = a.side;
  height = a.side;
}
int main () {
  Square sqr;
  Rectangle rect;
  sqr.setSide(4);
  rect.print();
  rect.convert(sqr);
  cout << rect.area();
  getch();
  return 0;
}


