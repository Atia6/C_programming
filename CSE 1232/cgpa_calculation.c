//cgpa calculation

#include<stdio.h>

main()
{
int i,j,k,l[100][100][100];
float n,m=0,p=0,q=0,gpa[100][100],cgpa[1000];
for(i=1;i<=3;i++) //Considering a single student
{

    printf("Student %d:\n",i);
    for(j=1;j<=8;j++)//This loop is for two semesters
{
        printf("Semester %d:\n",j);
        for(k=1;k<=5;k++)//This loops takes in the factor for three subs
        {
            printf("Subject %d:\n",k);
            scanf("%d",&l[i][j][k]);
            if(l[i][j][k]>=80 && l[i][j][k]<=100)
            {
               n=4.00;
            }

            else if(l[i][j][k]>=75 && l[i][j][k]<=79)
            {
              n=3.75;
            }

            else if(l[i][j][k]>=70 && l[i][j][k]<=74)
            {
              n=3.50;
            }

            else if(l[i][j][k]>=65 && l[i][j][k]<=69)
            {
                n=3.25;
            }

            else if(l[i][j][k]>=60 && l[i][j][k]<= 64)
            {
               n=3.00;
            }

            else if(l[i][j][k]>=55 &&l[i][j][k]<= 59)
            {
              n=2.75;
            }
                 else if(l[i][j][k]>=50 && l[i][j][k]<= 54)
                 {
                     n=2.50;
                 }

                 else if(l[i][j][k]>=45 && l[i][j][k]<=49)
                 {
                     n=2.25;
                 }

                 else if(l[i][j][k]>=40 && l[i][j][k]<=44)
                 {
                   n=2.00;
                 }

                 else if(l[i][j][k]<40 && l[i][j][k]>=0)
                 {
                    n=0.00;
                 }

                  m=m+n;

        }


    gpa[i][j] = (m)/3;
    printf("gpa of student %d of semester %d = %f\n",i,j,gpa[i][j]);
    p=p+gpa[i][j];

    m=0;
}

cgpa[i]=p/2;
p=0;

printf("cgpa of student %d=%f\n ",i,cgpa[i]);
}

}
