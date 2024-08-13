#include<stdio.h>
int main()
{
	int per;
	printf("Enter the percentage:");
	scanf("%d",&per);
	if(per>=80 && per<=100)
	{
		printf("Distinction");
	}
	else if(per>=60 && per<=79)
	{
		printf("Fist class");
	}
	else if(per>=40 && per<=59)
	{
		printf("Second class");
	}
	else if(per>=0 && per<=40)
	{
		printf("Fail");
	}
	else
	{
		printf("Invaild percentage");
	}
}
