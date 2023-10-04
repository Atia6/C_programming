/*Write a program to find roots of a quadratic equation……
Program:*/
#include<stdio.h>
main()
{
  float a,b,c,x1,x2,r,y1,y2;
int f;
    printf("Equation: ax*x+bx+c=0;\n Enter a,b and c:");
    scanf("%f %f %f",&a, &b ,&c);
    r=(b*b-4*a*c);
    x1=(-b+pow(r,.5))/2*a;
    x2=(-b-pow(r,.5))/2*a;
 if(r>0)
        {f=1;}
 else if(r==0)
       {
         f=2;
       }
    else if(r<0)
      {  f=3;
      }switch(f)
{case 1:printf("Roots are real & unequal.\n");
 printf("roots are:%.2f,%.2f",x1,x2);
    break;
case 2:printf("Roots are real & equal.\n");
printf("roots are:%.2f,%.2f",x1,x2);
 break;
default:printf("Roots are unequal & imaginary.\n");
y1=(-b/2*a);
y2=(pow(-r,.5))/2*a;
printf("roots are:%.2f+i%.2f and %.2f-i%.2f",y1,y2,y1,y2);}
}
