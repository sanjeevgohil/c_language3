#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=69;
	while(i>=65)
	{
		for(j=i;j<=69;j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i--;
	}
	getch();
}