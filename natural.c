#include<stdio.h>
#include<conio.h>
int main()
{
int number,i,sum;
printf("enter a number\n");
scanf("%d",&number);
for(i=1;i<=number;++i)
{
sum= sum+i;
}
printf("sum=%d ",sum);
return 0;
}
