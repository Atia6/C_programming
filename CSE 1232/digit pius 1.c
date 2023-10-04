#include<stdio.h>>
int main()
{
    int a,b,v=0,n,nn,vv=0;
    scanf("%d",&a);
    while(a>0)
    {
         n=(a%10)+1;
         v=v*10+n;
         a=a/10;
    }
    b=v;
    while(b>0)
    {
        nn=(b%10);
        vv=vv*10+nn;
        b=b/10;
    }
    printf("%d",vv);
    return 0;
}
