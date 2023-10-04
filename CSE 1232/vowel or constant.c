#include<stdio.h>
main()
{
    char ab;
    printf("Enter a letter:");
    scanf("%c", &ab);
    if(ab=='a'|| ab=='A' || ab=='e' || ab=='E'||ab=='i'||ab=='I' || ab=='o' || ab=='O' || ab=='u' || ab=='U')
        printf("vowel");
    else
        printf("consonent");
}
