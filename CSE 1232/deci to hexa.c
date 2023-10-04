#include<stdio.h>
#include<conio.h>
void main()
{

	long int deca, quot;
	char hexdeca[100];
	int i=1, j, temp;
	printf("Enter any decimal number : ");
	scanf("%ld",&deca);
	quot=deca
	while(quot!=0)
	{
		temp=quot%16;

		if(temp<10)
		{
			temp=temp+48;
		}
		else
		{
			temp=temp+55;
		}
		hexdeca[i++]=temp;
		quot=quot/16;
	}
	printf("Equivalent hexadecimal value of %d is : \n",deca);
	for(j=i-1; j>0; j--)
	{
		printf("%c",hexdeca[j]);
	}
	getch();
}
