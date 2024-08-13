#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the value a:");
  scanf("%d",&a);
  printf("Enter the value b:");
  scanf("%d",&b);
  printf("\nBefore Swapping\nFirst integer = %d\nSecond integer = %d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n",a,b);

}
