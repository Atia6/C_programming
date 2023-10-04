/*1. (1)+(1+2)+(1+2+3)+……….+(1+2+3+….+n)
Program:*/
#include<stdio.h>
main()
{
    int i,n,s=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   s=s+j;}
   }
    printf("%d",s);
}


