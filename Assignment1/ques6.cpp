#include<iostream>
using namespace std;
int main()
{
	int n,i,t=1;
	cout<<"enter the number";
	cin>> n;
	for(int i=2;i<=n/2;i++)
	{
	if(n%i==0)
	t=0;
}
if(t==1)
cout<<n<<"is a prime num";
else
cout<<n<<"is not a prime number";
}
