#include<stdio.h>
#include<conio.h>
void main()
{
int number,temp,remainder,reverse;
printf("enter an number\n");
scanf("%d",&number);
temp=number;
while(number>0)
{
remainder=number%10;
reverse=reverse*10+remainder;
number/=10;
printf("number is =%d\n",temp);
printf("reverse is=%d\n",reverse);
if(temp==reverse)
{
printf("the number is palindrome\n");
}
else
{
printf("the number is not a paindrome\n");
}
getch();
}
