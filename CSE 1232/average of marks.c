#include<stdio.h>
main()
{
    int avg,sum=0;
    int i;
    int marks[20];
    for(i=0;i<=19;i++)
    {
        printf("Enter marks of roll %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=19;i++)
    {
        sum=sum+marks[i];
    }
     avg=sum/20;
     printf("Average marks=%d",avg);
}
