#include<stdio.h>
#include<conio.h>
int main()
{
int number1,number2,number3;
printf("enter the values of number1,number2,number3");
scanf("%d %d %d",&number1,&number2,&number3);
printf("number1=%d\t number2=%d\t number3=%d");
if(number1>number2)
{
if(number1>number3)
{
printf("%d is the largest",number1);
}
else
{
printf("%d is the largest",number2);
}
if(number2>number3)
{
printf("%d is the largest",number2);
}
else
{
printf("%d is the largest",number3);
}
return 0;
}
