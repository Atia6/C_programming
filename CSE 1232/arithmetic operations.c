#include<stdio.h>
main()
{
    float a,b,p,q,r,s;
    printf("Enter any two number:");
    scanf("%f %f",&a,&b);
    p=a+b;
    q=a-b;
    r=a*b;
    s=a/b;
    printf("Summation %.2f\nSubtraction %.2f\nMultiplication %.2f\nDivision %.2f",p,q,r,s);
}
