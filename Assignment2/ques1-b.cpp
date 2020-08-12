#include<iostream>
#include<math.h>
using namespace std;
void printpattern(int radius)
{
float dist;
int i,j;
for(i=0;i<=2*radius;i++)
{
	for (j=0;j<=2*radius;j++)
	{
		dist = sqrt((i-radius)*(i-radius)+(j-radius)*(j-radius));
	if(dist>radius-0.5 && dist<radius+0.5)
	cout<<"*";
	else
	cout<<" ";
}
cout<<endl;	
}
}
int main()
{
	int radius=3;
	printpattern(radius);
}

