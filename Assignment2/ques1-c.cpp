#include<iostream>
using namespace std;
int main()
{
int n=5;
int x=n/2+1;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(j==n/2+1||(j<=x && j>=n-x+1 && i<=n/2+1))
		cout<<"*";
		else
		cout<<" ";
}
cout<<endl;
x++;
	}
}
