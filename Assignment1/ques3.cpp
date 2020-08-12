#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,n,t;
	cout<<"enter number of element:";
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n-1;i++)
	{
		t=a[i];
		j=i-1;
		while((t<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
	cout<<"\nsorted list is as follows\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
	
}
