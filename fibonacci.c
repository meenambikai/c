#include<astdio.h>
int main()
{
int a=0,b=1,n,c;
scanf("%d",&n);
printf("%d\n%d",a,b);
for(i=0;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",a,b);
}
return 0;
}
