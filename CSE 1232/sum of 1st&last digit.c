#include<stdio.h>
main()
{
    int a,b,c,d,e,f,p,q,r,s,t,u,x;
    printf("enter a 6 digit number:");
    scanf("%d",&a);
    p=a%10;
    b=a/100000;

    u=b%10;
    x=p+u;
    printf("%d",x);
}
