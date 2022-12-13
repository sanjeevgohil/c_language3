#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	do
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
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