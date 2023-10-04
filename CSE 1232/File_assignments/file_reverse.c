//Problem-2: Write a C program to Reverse the content of a file and print it.


#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1,*f2;
    char c[1000];
    char s[1000];
    f1=fopen("C:\\Users\\USER\\Desktop\\ss\\Text.txt", "r");
    if(f1==NULL)
    {
        printf("File is Corrupted 1!");
        exit(1);
    }

    fscanf(f1,"%[^\n]",c);
    f2=fopen("C:\\Users\\USER\\Desktop\\ss\\ReverseText.txt", "w");
    if(f2==NULL)
    {
        printf("File is Corrupted 2!");
        exit(1);

    }
    fprintf(f2,"%s",strrev(c));
    printf("Text reversed Successfully\n\n");
    fclose(f1);
    fclose(f2);
}
