#include<stdio.h>
main()
{int i,j,n;
printf("Enter Row number:");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");

    }
}