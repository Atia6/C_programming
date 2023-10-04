#include<stdio.h>
main()
{
    int a[100][100],i,j,r1,c1,r2,c2,sum[100][100];
    int b[100][100];
    printf("Enter row number and column number of matrix:");
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
    if(c1==c2 && r1==r2)
    {
        for(i=0;i<c1;i++)
    {
       for(j=0;j<r1;j++)

       {
           sum[i][j]=a[i][j]+b[i][j];
       }
    }
    }
    else
    {
        printf("Invalid input.");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n",sum[i][j]);
    }
}
