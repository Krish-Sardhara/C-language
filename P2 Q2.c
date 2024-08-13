#include<stdio.h>
int main()
{
	int a,b,c;
	 printf("Enter the value a:");
	 scanf("%d",&a);
	 printf("Enter the value b:");
	 scanf("%d",&b);
	 printf("Enter the value c:");
	 scanf("%d",&c);
	 {	
	 	if(a>b && a>c)
	 	{
	 		printf("max. value is a");
	 		
		 } 
		 else if(b>a && b>c)
		 {
		 	printf("max. value is b");
		 }
		 else
		 {
		 	printf("max. value is c");
		 }
	 	
	 }
	 
}
