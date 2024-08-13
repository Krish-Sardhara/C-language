#include<stdio.h>
void main()
{
	float a,c,r,pi=3.14;
	printf("Enter the value:");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("Area of the circle:%f\n",a);
	printf("Circumference of circle:%f",c);
}
