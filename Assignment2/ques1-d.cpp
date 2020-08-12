#include<iostream>
using namespace std;
int main()
{
	int n=9;
	int x=n/2+1;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==x||j==n-x+1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		if(i<=n/2)
		x--;
		else
		x++;
		cout<<endl;
	}
}
