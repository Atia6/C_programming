//call a string

#include<stdio.h>
main()
{
    char a[100]="first""second";
    int i;
    for(i=0;i<2;i++)
    {
        printf("%s",a[i]);
    }
}
