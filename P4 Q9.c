// P4P9.c
#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i+1;j++)
		{
			printf("%d",j);
		}
		for(k=1;k<=2*i-2;k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}

