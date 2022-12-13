#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=69;
	do
	{
		for(j=i;j<=69;j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i--;
	}while(i>=65);
	getch();
}