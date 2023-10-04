//Problem-3: Write a C program to print number of lines, comments and no of blank lines in a given program.



#include <stdio.h>

void main(int argc, char* argv[])
{
    int line= 0, comments= 0, blankline= 0;//Declaring Variables

    FILE *fp1;
    char ch;
    fp1 = fopen("C:\\Users\\USER\\Documents\\FileBlank.c", "r");//Opening File

    while ((ch = fgetc(fp1))!= EOF)
    {
        if (ch  ==  '\n')
        {
            line++;
        }
        if (ch  ==  '\n')
        {
            if ((ch = fgetc(fp1))  ==  '\n')
            {
                fseek(fp1, -1, 1);
                blankline++;
            }
        }

    }
    fseek(fp1, 0, 0);
    while ((ch = fgetc(fp1))!= EOF)
    {
        if (ch  ==  '/')
        {
            if ((ch = fgetc(fp1))  ==  '/')
            {
                comments++;
            }
        }
    }
    printf("Total no of lines: %d\n", line);
    printf("Total no of comment line: %d\n", comments);
    printf("Total no of blank lines: %d\n", blankline);
}

