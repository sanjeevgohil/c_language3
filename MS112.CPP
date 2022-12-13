#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=69;
	A:
	{
		for(j=i;j<=69;j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i--;
	}
	if(i>=65)
	{
		goto A;
	}
	getch();
}