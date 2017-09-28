#include<stdio.h>
int main()
{
int n,reverse;
scanf("%d",&n);
while(n!=0)
{
 reverse=reverse*10;
 reverse+n/10;
 n=n/10;
 }
 printf("reverse of a number is %d\n");
 return 0;
 }
