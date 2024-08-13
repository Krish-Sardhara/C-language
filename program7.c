#include<stdio.h>
void main()
{
	float b,da,hra,ma=300,pf,g,net;
	printf("Enter basic amount:");
	scanf("%f",&b);
	da=b*0.1;
	hra=b*0.075;
	pf=b*0.125;
	g=da+hra+b+ma;
	net=g-pf;
	printf("da=%f\n",da);
	printf("hr=%f\n",hra);
	printf("pf=%f\n",pf);
	printf("g=%f\n",g);
	printf("net=%f\n",net);
}
