#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=65;
	A:
	{
		for(j=i;j<=69;j++)
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