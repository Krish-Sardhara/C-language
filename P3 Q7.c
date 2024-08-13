#include<stdio.h>
int main() 
{
  float n,i,j,fact=1,sum=0;
  printf("Enter Value of n:");
  scanf("%f",&n);
  for (i=1;i<=n;i++) 
  {
    fact=fact*i;
    sum=sum+(1/fact);
  }
  printf("\nSum of Series = %f",sum);
  return 0;
}
