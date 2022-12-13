#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=65;
	A:
	{
		for(j=65;j<=i;j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i++;
	}
	if(i<=69)
	{
		goto A;
	}
	getch();
}