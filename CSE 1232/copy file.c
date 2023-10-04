#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1,*f2;
    char c[1000];
    char s[1000];
    f1=fopen("C\\Users\\USER\\Desktop\\Text.txt","r");
    if(f1==NULL)
    {
        printf("File is corrupted");
        exit(1);
    }
    fscanf(f1,"%[^\n]",c);
    f2=fopen("C:\\Users\\USER\\Desktop\\ReverseTest.txt","w");
    if(f2==NULL)
    {
        printf("File is corrupted.");
        exit(1);
    }
    printf("File Copied Successfully!\n\n")
    fprintf(f2,"%s",strrev(c));
    fclose(f1);
    fclose(f2);
}
