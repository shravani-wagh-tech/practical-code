#include <stdio.h>
int main()
{
    int u,a,t,v;
    printf("enter three number:");
    scanf("%f%f%f",&u,&a,&t);
    v = u+a*t;
    printf("final velocity: %2f",v);
    return 0;
}