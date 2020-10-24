#include<iostream>
using namespace std;
class pets{
	public:
		void Whattodo(){
			cout<<"Eat sleep Repeat"<<"\n";
		}
};
class Dogs: public pets{
	public:
		void Woff()
		{
			cout<<"woff! Let's go for a walk Human!!"<<"\n";
		}
};
int main(){
	Dogs Edgar;
	Edgar.Woff();
	Edgar.Whattodo();
}
