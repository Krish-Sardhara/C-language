// P4P11.c
#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j='E';j>=i;j--)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
