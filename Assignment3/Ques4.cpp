#include<iostream>
#include<math.h>
using namespace std;
float sphereVolume(float r){
return (4.0/3.0*3.14159*pow(r,3));
}
int main()
{
	float r;
	cout<<"Enter the radius"<<endl;
	cin>>r;
	cout<<"Volume of sphere is "<<sphereVolume(r)<<endl;
}
