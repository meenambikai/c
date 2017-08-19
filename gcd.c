#include<stdio.h>
int main()
{
int number1,number2,integer,gcd;
printf("enter two integers");
scanf("%d %d",&number1,number2);
for(integer=0;integer<=number1 && integer<=number2;++i)
{
if(number1%integer==0 && number2%integer==0)
{
gcd=integer;
}
printf("gcd of two number1 and number2 is %d",number1,number2,gcd);
}
return 0;
}
