#include<stdio.h>
void main()
{
	float a,b,c,g;
	printf("Enter value a:");
	scanf("%f",&a);
	printf("Enter value b:");
	scanf("%f",&b);
	c=a+b;
	printf("Addition=%f\n",c);
	c=a-b;
	printf("Subtraction=%f\n",c);
	c=a*b;
	printf("Multiplication=%f\n",c);
	c=a/b;
	printf("Division=%f\n",c);
	g=(int)a%(int)b;
	printf("Modulo=%f\n",g);
}
