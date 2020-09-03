#include<iostream>
#include<cstdlib>
#include<iomanip>
#define MAXSIZE 100
using namespace std;
void printArray(int arr[],int ss,int se)
{
	if(ss>=se)
	return;
	cout<<arr[ss];
	printArray(arr,ss+1,se);
}
void printArray(int[],int,int);
int main()
{
	int arr[MAXSIZE];
	int N,i;
	cout<<"Enter size of the array: "<<endl;
	cin>>N;
	cout<<"Enter element in the array: "<<endl;
	for(i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cout<<"Element in the array: "<<endl;
	printArray(arr, 0,N);
	return 0;
} 
