#include<iostream>
using namespace std;
float calculatecharge(float hourstays)
{
	float charge=2.00;
	 if(hourstays>3 && hourstays<24)
	
		charge=2+(hourstays-3)*0.5;
	
	else if(hourstays>=24)
	
		charge=10.00;
	
	return charge;
}
float calculatecharge(float );
int main()
{
	float Total;
	float hourstays;
	float car1,car2,car3,car1c,car2c,car3c;
	cout<<"/Enter the amount of hours car 1 was parked: \n";
	cin>>car1;
	car1c=calculatecharge(car1);
	cout<<"charge for car1 is: "<<car1c<<endl;
	
		cout<<"/Enter the amount of hours car 2 was parked: \n";
	cin>>car2;
	car2c=calculatecharge(car2);
	cout<<"charge for car2 is: "<<car2c<<endl;
		cout<<"/Enter the amount of hours car 3 was parked: \n";
	cin>>car3;
	car3c=calculatecharge(car3);
	cout<<"charge for car3 is: "<<car3c<<endl;
	Total =car1+car2+car3;
	cout<<"Total hoursatys of the day is: "<<Total<<endl;
	Total=car1c+car2c+car3c;
	cout<<"Total chrge of the day is: "<<Total<<endl;
	return 0;	
}
