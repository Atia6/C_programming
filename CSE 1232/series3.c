/*3.1*1+2*2+….+n*n*/

#include<stdio.h>
main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    printf("%d",s);
}
