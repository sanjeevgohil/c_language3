#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
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
	}
	getch();
}