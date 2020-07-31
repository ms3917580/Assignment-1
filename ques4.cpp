#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10];
	int i,j,len,t=1;
	cout<<"enter the string:";
	gets(str);
	len=strlen(str);
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
	if(str[i]!=str[j])
		t=0;
	}
	if(t==1)
	cout<<"\n the string is palindrome";
	else
	cout<<"\n the string is not palindrome";
	
}
