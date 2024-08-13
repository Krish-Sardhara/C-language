// P4P12.c
#include<stdio.h>
int main()
{
	char i,j;
	int k=1;
	for(i=1;i<=5;i++)
	{
		for(j='A';j<='E'-i+1;j++)
		{
			printf("%c",j);
		}
		for(k=1;k<=2*i-2;k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}

