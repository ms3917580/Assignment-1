#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrome(string str,int x,int y)
{
	
	if(x>=y)
	return true;
	if(str[x]!=str[y])
	return false;
	return isPalindrome(str,x+1,y-1);
}
int main()
{
	string str="radar";
	int len =str.length();
	if (isPalindrome(str, 0, len-1))
	cout<<"Palindrome";
	else
	cout<<"Not Palindrome";
	return 0;
}
