#include<stdio.h>
#include<conio.h>
int main()
{
char character;
printf("enter any character\n");
scanf("%c",&character);
if(character>='a'&& character<='z')||(character>='A'&& character<='z')
{
printf("%c is an alphabet",character);
}
else
{
printf("%c is not an alphabet");
}
return 0;
}
