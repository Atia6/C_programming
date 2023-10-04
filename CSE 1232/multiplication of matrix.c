#include<stdio.h>
main()
{
    int a[100][100],i,j,r1,c1,k,r2,c2,c[100][100],sum=0;
    int b[100][100];
    printf("Enter row number and column number of 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter row number and column number of 2nd matrix:");
    scanf("%d %d",&r2,&c2);
    printf("1st matrix.\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter element of %d %d position.",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("2nd matrix.\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter element of %d %d position.",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)

    {

       for(i=0;i<r1;i++)
       {
           for(k=0;k<c2;k++)
           {
               for(j=0;j<c1;j++)
               {
                   sum=sum+a[i][j]*b[j][k];
               }
               c[i][k]=sum;
               sum=0;
           }
       }
    }
    else
    {
        printf("Invalid input.");
    }
printf("Result:\n");
for(i=0;i<r1;i++)
{
    for(k=0;k<c2;k++)
    {
        printf("%d ",c[i][k]);
    }
    printf("\n");
}
}

