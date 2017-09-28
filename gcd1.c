#include<stdio.h>
int main()
{
 int a,b,t;
 scanf("%d",&a);
 scanf("%d",&b);
 while(b!=0)
 {
 t=b;
 b=a%b;
 a=t;
 }
 hcf=a;
 printf("hcf of a and b is %d",a,b);
 return 0;
 }
