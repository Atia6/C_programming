//Student's result grading

#include <stdio.h>
#include <stdlib.h>

void writesfile();
void readsfile();

int main()
{
    writesfile();
    readsfile();
    return 0;
}
void writesfile(){
          char subs[] = "ABCDEFGHI";
    int students[50];
    int subjmarks[50][50];
    int i, j;
    for(i=0;i<3;i++){
            printf("Student\n " );
            printf("Subject Score: \n");
            for(j=0; j<3; j++){
                printf("%c = ", subs[j]);
                scanf("%d", &subjmarks[i][j]);


        }
    }
    FILE * fpointer = fopen("project3.02.txt", "w");
    for(i=0;i<3;i++){
            fprintf(fpointer, "Student\n " );
            fprintf(fpointer, "Subject Score: \n");
            for(j=0; j<3; j++){
                fprintf(fpointer, "%c =\n ", subs[j]);
                fprintf(fpointer, "%d \n", subjmarks[i][j]);
            }}
            fclose(fpointer);
}
void readsfile(){
    char a[200];
    FILE * fpointer = fopen("project3.02.txt", "r");
    char lines;
int i=0;
    while(!feof(fpointer)){

        lines = fgetc(fpointer);
    if(lines<=57 && lines>=48)
    {a[i]=lines;
    printf("%c", a[i]);
    }
i=i+1;
    }

    fclose(fpointer);
}

