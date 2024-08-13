#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Reverse number:");
	for(n;n>0;)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	return 0;
}
