#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
const int MAXRANGE=1000;
int recursiveMinimum(int array[],int x,int y)
{
	static int smallest=MAXRANGE;
	if(array[x]<smallest)
	smallest=array[x];
	return x == y ?
	smallest : recursiveMinimum(array,x+1,y);
}
int recursiveMinimum(int [],int,int);
int main()
{
	int SIZE=10;
	int array[SIZE];
	int smallest;
	
	for( int loop=0;loop<SIZE;loop++)
	array[loop]=1+rand() % MAXRANGE;
	
	cout<<"Array numbers are : \n";
	for(int k=0;k<SIZE;k++)
		cout<<setw(5)<<array[ k ];
	cout<<"\n";
	smallest=recursiveMinimum(array,0,SIZE-1);
	cout<<"\nSmallest element is:"<< smallest <<endl;
}
