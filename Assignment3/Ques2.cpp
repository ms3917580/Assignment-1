#include<iostream>
using namespace std;
class Complex{
	public:
	friend Complex operator*(Complex const &,Complex const &);
    Complex(int r=0,int i=0)
	{
		real=r;
		img=i;
		}	
		void print(){
    	cout<<real<<" +i"<<img<<endl;
		}
		private:
			int real,img;
};
Complex operator*(Complex const &obj1,Complex const &obj2){
return Complex(obj1.real*obj2.real-obj1.img*obj2.img,obj1.img*obj2.real+obj1.real*obj2.img);
}
int main()
{
	Complex c1(4,2),c2(4,5);
	Complex c3=c1*c2;
	c1.print();
	c2.print();
	c3.print();
}
