#include<stdio.h>
#include<conio.h>
int main()
{
int number,i,sum;
printf("enter the number\n");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
printf("%d",i);
sum=sum+i;
}
printf("sum=%d",sum);
return 0;
}
