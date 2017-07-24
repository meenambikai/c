#incude<stdio.h>
#include<conio.h>
int main()
{
int base,exponent,result;
printf("enter base number:");
scanf("%d",&base);
printf("enter an exponent:");
scanf("%d",exponent);
result=power(base,exponent);
printf("%d^%d=%d",base,exponent,result);
return 0;
}
