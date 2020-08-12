#include<iostream>
#include<math.h>
#include<iomanip>
using std::setprecision;
using namespace std;
 class Rectangle
 {
 public:
 Rectangle(double*,double*,double*,double*);
 void setCoord(double*,double*,double*,double*);
 void perimeter(void);
 void area(void);
 void square(void);
 private:	
 double point1[2];
 double point2[2];
 double point3[2];
 double point4[2];	
 };

 Rectangle::Rectangle(double *a,double *b,double *c,double *d)
 {
 	setCoord(a,b,c,d);
 }
 void Rectangle::setCoord(double *p1,double *p2,double *p3,double *p4)
 {
 	  int x=0,y=1;
 	point1[x]=(p1[x]>20.0||p1[x]<0.0)? 0.0 : p1[x];
 	point1[y]=(p1[y]>20.0||p1[y]<0.0)? 0.0 : p1[y];
 	point2[x]=(p2[x]>20.0||p2[x]<0.0)? 0.0 : p2[x];
 	point2[y]=(p2[y]>20.0||p2[y]<0.0)? 0.0 : p2[y];
	point3[x]=(p3[x]>20.0||p3[x]<0.0)? 0.0 : p3[x];
	point3[y]=(p3[y]>20.0||p3[y]<0.0)? 0.0 : p3[y];
	point4[x]=(p4[x]>20.0||p4[x]<0.0)? 0.0 : p4[x];
	point4[y]=(p4[y]>20.0||p4[y]<0.0)? 0.0 : p4[y];
	
	if(p1[y]==p2[y] && p1[x]==p4[x] && p2[x]==p3[x] && p3[y]==p4[y])
	{
		perimeter();
		area();
		square();
	}
	else
	cout<<"Coordinates do not form a rectangle:\n";
 }
 void Rectangle::perimeter(void)
 {
 	double l = fabs(point4[1]-point1[1]),w=fabs(point2[0]-point1[0]);
 	cout<<"length="<<(l>w ? l : w)<<"\t"<<"width="<<(l>w?w:l)<<"\nThe perimeter is:"<<2*(w+l)<<endl;
 }
 void Rectangle::area(void)
 	 {
 	double l = fabs(point4[1]-point1[1]),w=fabs(point2[0]-point1[0]);
 	cout<<"The area is:"<<setprecision(1)<<w*l<<endl;
 }
 void Rectangle::square(void)
 {
 	int x=0,y=1;
 	if(fabs(point4[y]-point1[y])==fabs(point2[x]-point1[x]))
 	cout<<"The rectangle is a square.\n\n";
 }
 int main()
 {
 	double w[2]={1.0,1.0},x[2]={5.0,1.0},y[2]={5.0,3.0},z[2]={1.0,3.0},j[2]={0.0,0.0},k[2]={1.0,0.0},m[2]={1.0,1.0},n[2]={0.0,1.0},v[2]={99.0,-2.3};
	       Rectangle a(z,y,x,w), b(j,k,m,n), c(w,x,m,n), d(v,x,y,z);
 }
