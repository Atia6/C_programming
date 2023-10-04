/*Problem: Admission to a professional course is subject to the following condition:
•	Marks in mathematics >= 60
•	Marks in Physics >= 50
•	Marks in chemistry > = 40
•	Total in all three subjects >= 200
Or
•	Total in mathematics and physics > = 150
Given the marks in the three subjects, write a program to process the applications to list the eligible from 10 candidate. Use ‘File’ structure to process data.
Solution:
•	First a program in C language is written to take the inputs from the user and store it in a .txt file named “Marks.txt” from where further process will be done. The input is the marks of these three subjects of ten students.
First code:*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char math[10], phy[10], chem[10], stats[10];

    fp = fopen ("C:\\Users\\USER\\Desktop\\Marks.txt", "w");
    printf ("Total students: 10\n\n");

    for (int i=1; i<=10; i++) {
    printf ("Student_NO: %d\n", i);
    printf("Enter marks: \n");
    printf ("Math: ");
    scanf ("%s", &math);
    printf ("Physics: ");
    scanf ("%s", &phy);
    printf ("Chemistry: ");
    scanf ("%s", &chem);
    printf ("\n");

    fprintf(fp, "Student_No: %d\n", i);
    fprintf(fp, "Math No: %s\n", math);
    fprintf(fp, "Physics No: %s\n", phy);
    fprintf(fp, "Chemistry No: %s\n", chem);
    fprintf(fp, "\n");
    }
    fclose (fp);
    return 0;
}

/*•	Then the second program will take inputs directly from that “Marks.txt” file where the marks are saved and will process those marks. Then the program will show weather those ten students are eligible or not according to the conditions given in the problem.
Second Code:*/
#include <stdio.h>
int main()
{
    FILE *in_file;
          char sub1[80], sub2[80], sub3[80], line_1[80], line_2[80],
          line_3[80], line_4[80], c[80], blank_line[80];
    int num, math, phy, chem;

in_file = fopen("C:\\Users\\USER\\Desktop\\Marks.txt", "r");

     printf ("Total Student: 10\n\n");

     for (int i=0; i<10; i++) {
        fgets(line_1, 80, in_file);
        fgets(line_2, 80, in_file);
        fgets(line_3, 80, in_file);
        fgets(line_4, 80, in_file);
        fgets(blank_line, 80, in_file);

        sscanf (line_1, "%s %d", &c, &num);
        sscanf (line_2, "%s %d", &sub1, &math);
        sscanf (line_3, "%s %d", &sub2, &phy);
        sscanf (line_4, "%s %d", &sub3, &chem);

        if (math >= 60 && phy >= 50 && chem >= 40 && math+phy+chem>=200)
            printf ("%s is Eligible\n", line_1);
        else if (math + phy >= 150)
            printf ("Student No %s is Eligible\n", line_1);
        else
            printf (" Student No %s is NOT ELIGIBLE\n", line_1);
    }
    fclose(in_file);
    return 0;
}

