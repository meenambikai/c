#include<stdio.h>
#include<conio.h>
int main()
{
int number;
printf("even numbers between 1 to 20\n");
for(number=1;number<=20;number++)
{
if(number%2==0)
{
printf("%d",number);
}
}
return 0;
}
