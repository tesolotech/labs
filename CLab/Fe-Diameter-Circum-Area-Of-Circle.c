#include<stdio.h>
#define pie 3.14159
double Area(double r);
double Diameter(double r);
double Circumference(double r);
int main()
{
	float r;
	printf("enter the radious:-");
	scanf("%f",&r);
	float a=Area(r);
	float d=Diameter(r);
	float c=Circumference(r);
	printf("Area=%f\n",a);
	printf("Diameter=%f\n",d);
	printf("Circumference=%f\n",c);
}
double Area(double r)
{
	return(pie*r*r);
}
double  Diameter(double r)
{
	return(2*r);
}
double Circumference(double r)
{
	return(2*pie*r);
}
