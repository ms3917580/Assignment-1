#include<iostream>
using namespace std;
int main()
{
	int SIZE=1000;
	int array[SIZE];
	int count=0;
	
	for(int k=0;k<SIZE;k++)
	array[k]=1;
	for(int i=1;i<SIZE;i++)
	{
	if(array[i]==1 && i!=1)
	{
		for(int j=1;j<SIZE;j++)
		{
		if(j%i==0 && j!=i)
		array[j]=0;
	}
	}
}
for(int a=2;a<SIZE;a++)
{
	if(array[a]==1)
	{
		cout<<a<<"is a prime number.\n";
		count++;
	}
}
cout<<"A total of "<<count<<"prime number were found"<<endl;
}
