#include<stdio.h>
#include<conio.h>
int main()
{
int number,i,flag=0;
printf("enter a number:");
scanf("%d",&number);
for(i=2;i<=number/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
if(flag==0)
{
printf("%d is prime number",number);
}
else
{
printf("%d is not prime number",number);
}
}
return 0;
}
