#include<stdio.h>
main()
{
  int n[100];
  int o=0,e=0,p=0,ne=0,z=0,i;
  for(i=0;i<25;i++)
  {
      printf("Enter number %d:",i+1);
      scanf("%d",&n[i]);
  }

  for(i=0;i<25;i++)
  {
      if(n[i]==0)
        z=z+1;
      else if(n[i]%2==0)
          e=e+1;
       else
             o=o+1;
  }
   printf("odd number =%d\n",o);
    printf("Even number =%d\n",e);
    for(i=0;i<25;i++)
  {
      if(n[i]>0)
             p=p+1;
      else if(n[i]<0)
             ne=ne+1;
  }
   printf("Zero=%d\n",z);
  printf("Positive number =%d\n",p);
    printf("Negative number =%d\n",ne);

}
