#include<stdio.h>
#include<stdlib.h>
void main(intvargc,char*argv[])
{
    int line=0,comments=0,blankline=0;
    FILE *f1;
    char ch;
    fp1=fopen("C;\\Users\\Documents.c","r");
    while((ch=fgetc(fp1))!=EOF)
    {
        if(ch=='\n')
        {
            line++;

        if((ch=fgetc(f1))=='\n')
        {
            fseek(fp1,-1,1);
            blankline++;
        }
    }
    }
    fseek(fp1,0,0);
    while((ch=fgetc(fp1))!=EOF)
    {
        if(ch=='/')
        {
            if((ch=fgetc(fp1))=='/')
            {
                comments++;
            }
        }
    }
    printf("Total no of lines:%d\n ",line);

    printf("Total no of comment lines:%d\n ",comment);

    printf("Total no of blank lines:%d\n ",blankline);


}
