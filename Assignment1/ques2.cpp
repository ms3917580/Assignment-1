#include<iostream>
using namespace std;
int main()
{
	int a[10],t,i,j,n;
	cout << "enter size of array:";
	cin >> n;
	cout<<"enter element of array:";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]<a[j];
			a[j]=t;
		}
	}
}
cout<<"second max number:"<<a[n-2];
cout<<"\nsecond min number:"<<a[1];
return 0;
}
