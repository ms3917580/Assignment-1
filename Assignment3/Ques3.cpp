#include<iostream>
using namespace std;
class Complex{
	public:
	friend bool operator==(Complex const &,Complex const &);
	friend bool operator!=(Complex const &,Complex const &);
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
bool operator==(Complex const &obj1,Complex const &obj2){
	return (obj1.real==obj2.real && obj1.img==obj2.img);
}
bool operator!=(Complex const &obj1,Complex const &obj2){
return (obj1.real!=obj2.real && obj1.img!=obj2.img);
}
int main()
{
	 
		Complex c1(4,2),c2(4,5);
            c1.print();
            c1.print();
            if(c1==c2)
            {
            	cout<<"equal"<<endl;
			}
			else
			{
				cout<<"not equal";
			}
}
