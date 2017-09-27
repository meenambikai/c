#include<stdio.h>
int main()
{
int a,b,gcd,hcf,t;
scanf("%d",&a);
scanf("%d",&b);
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
gcd=a;
hcf=a*b/gcd;
printf("gcd is %d",gcd);
printf("hcf is %d",hcf);
return 0;
}
