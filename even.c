#include<stdio.h>
#include<conio.h>
void main()
{
int number;
printf("enter the number\n");
scanf("%d",&number);
if(number/2==0)
{
printf("%d is even",number);
}
else
{
printf("%d is odd",number);
}
getch();
}
