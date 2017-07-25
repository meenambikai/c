#include<stdio.h>
int main()
{
int number, sum=0,r,temp;
clrscr();
printf("enter the number\n");
scanf("%d",&number);
temp=number;
while(number>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp=sum)
{
printf("%d is armstrong number");
}
else
{
printf("%d is not a armstrong number");
}
return 0;
}
