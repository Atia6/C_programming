#include<stdio.h>
main()
{
    int a,b,c,d,e,i;
    for(i=1;i<=500;i++)
    {
        if(i/10==0)
        {
            printf("%d\n",i);
          }
          else if(i/100==0)
          {
              a=i%10;
              b=i/10;
              c=a*a+b*b;
              if(c==i)
              {
                   printf("%d\n",i);
              }
     }
          else if(i/1000==0)
          {
              a=i%10;
              b=i/10;
              c=b%10;
              d=b/10;
             e=a*a*a+c*c*c+d*d*d;
              if(e==i)
              {
                   printf("%d\n",i);
              }
          }
    }
}

