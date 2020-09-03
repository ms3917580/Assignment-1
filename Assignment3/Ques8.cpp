#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int side1,side2,hypo;
	int res,Hypo;
	for(side1=0;side1<500;side1++)
	{
		for(side2=0;side2<500;side2++)
		{
			for(hypo=0;hypo<500;hypo++)
			{
				res=((side1*side1)+(side2*side2));
				Hypo=hypo*hypo;
				if(res==Hypo)
				{
					cout<<"side1-"<<side1 <<"  side2-"<<side2 <<"  hypotaneous-"<<hypo <<endl;
				}
			}
		}
	}
}
