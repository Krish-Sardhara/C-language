#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter factorial number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\nshow to factorial number:%d",f);
	
	return 0;
}


