#include<iostream>
using namespace std;
class Complex{
	public:
	friend istream &operator>>(istream&,const Complex&);
	friend ostream &operator<<(ostream&,const Complex&);
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
istream &operator>>(istream&in,const Complex&obj){
	return in >> obj.real >> obj.img;
}
ostream &operator<<(ostream& out,const Complex& obj){
return out<<obj.real<<"+i"<<obj.img<<endl;
}
int main()
{
	Complex c1(4,2),c2(4,5);
	c1.print();
	c2.print();
}
