/*2.102+99+96+……+0
Program:*/
#include<stdio.h>
main()
{
    int i,n,s=0;

    for(i=102;i>=1;i=i-3)
    {printf("%d+",i);
        s=s+i;
    }
    printf("0\n=%d",s);
}
