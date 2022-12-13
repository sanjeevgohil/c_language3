#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=65;
	do
	{
		for(j=65;j<=i;j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i++;
	}while(i<=69);
	getch();
}