#include<iostream>
using namespace std;
int main()
{
	int a,b ,c;
	cout<<"enter three number:";
	cin>>a>>b>>c;
	int max=0;
	max=((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:c;
	cout<<"the greatest among three numbers is"<< max;
	cout<<endl;
	return 0;
}
