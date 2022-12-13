#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	do
	{
		for(j=5;j>=1;j--)
		{
			if(i==3||j==3)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
		i++;
	}while(i<=5);
	getch();
}