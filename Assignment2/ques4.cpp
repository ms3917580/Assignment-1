#include<iostream>
#include<string>
using namespace std;
class Rectangle
{
	public:
		Rectangle(double L,double W);
		void setLength(double L);
		double getLength();
		void setWidth(double W);
		double getWidth();
		double getarea();
		double getperimeter();
		void displaystatistics();
		
		private:
			double length,width;		
};
   Rectangle::Rectangle(double L,double W)
   {
   	length=L;
   	width=W;
   }
   void Rectangle::setLength(double L)
   {
   	length =L>0 && L<20.0 ? L:1.0;
   }
   double Rectangle::getLength()
   {
   	return length;
   }
   void Rectangle::setWidth(double W) 
   {
 	width =W>0 && W<20.0 ? W:1.0;
 }
 double Rectangle::getWidth()
 {
 	return width;
 }
 double Rectangle::getarea()
 {
 	return width*length;
 }
 double Rectangle::getperimeter()
 {
 	return 2*(length + width);
 }
 void Rectangle::displaystatistics()
 {
 	cout<<" length="<<getLength()<<endl;
 	cout<<" width="<<getWidth()<<endl;
 	cout<<" area="<<getarea()<<endl;
 	cout<<" perimeter="<<getperimeter()<<endl;
 }
 int main()
 {
 	Rectangle Rectangle1(2,4);
 	cout<<"Displaying the statistics of unit rectangle:"<<endl;
 	Rectangle1.displaystatistics();
 }
