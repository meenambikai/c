#include<stdio.h>
#include<conio.h>
int main()
{
int number,count=0;
printf("enter an integer:");
scanf("%d",&number);
while(number)
{
number=number/0;
count++;
}
printf("total digits :%d",count);
return 0;
}
