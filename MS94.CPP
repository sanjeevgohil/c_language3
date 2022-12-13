#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=65;
	while(i<=69)
	{
		for(j=65;j<=i;j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i++;
	}
	getch();
}