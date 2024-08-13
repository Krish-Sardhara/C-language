#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any Character:");
	scanf("%c",&ch);
	if( ch>='A' && ch<='Z')
	{
		printf("Capital character");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Small character");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Digit");
	}
	else 
	{
		printf("Special Symbol");
	}
}
