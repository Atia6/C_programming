//find out number in every 3 digits removing the unnecessary 0s

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char a[1000] = "053067009100",b[100];
    int i=0, n=0;
    int j = 0;
    int val[1000];

    while(a[i]!='\0')
    {
        for(n=i;n<(i+3);n++)
        {
            b[n]=a[n];
            printf("%c",b[n]);
        }
        for(n=i;n<i+3;n++)
        {
          if(n==i)
        {
          val[n]=atoi(&b[n]);
         printf(" %d\n",val[n]);
        } }
        i = i + 3;
    }

    return 0;
}
// output

//053 53
//067 67
//009 9
//100 100
