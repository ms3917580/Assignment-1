#include<iostream>
#include<string.h>
using namespace std;
void stringReverse(string str,int startSubstring)
{
	if(startSubstring==str.length())
	return;

	 stringReverse(str,startSubstring+1);
}
void stringReverse(string,int);
int main()
{
	int SIZE=100;
	int Reverse;
	string str="house";
	cout<<"Reverse string: "<<endl;
    for(int i=str.length()-1;i>=0;i--)
    {
	cout<<str[i];
    }
	stringReverse(str,0);
	return 0;
}

