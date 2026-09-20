#include<stdio.h>
int main()
{
int x, n,i;
int power = 1;
printf("enter x:");
scanf("%d",&x);

printf("enter n:");
scanf("%d",&n);
for(i = 1; i <= n;i++)
{
    power = power*x;
}
printf("%d^%d =%d",x,n,power);
return 0;
}