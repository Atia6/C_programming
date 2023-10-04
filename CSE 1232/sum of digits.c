#include<stdio.h>
main()
{
    int a,b,c,d,e,f,p,q,r,s,t,u,x;
    printf("enter a 6 digit number:");
    scanf("%d",&a);
    p=a%10;
    b=a/10;
    q=b%10;
    c=b/10;
    r=c%10;
    d=c/10;
    s=d%10;
    e=d/10;
    t=e%10;
    f=e/10;
    u=f%10;
    x=p+q+r+s+t+u;
    printf("%d",x);
}
