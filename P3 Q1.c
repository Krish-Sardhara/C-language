#include<stdio.h>
int main()
{
	int n,id;
	printf("Enter the integer number:");
	scanf("%d",&n);
	id=n%10;
	if(id&2==0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
}
	
