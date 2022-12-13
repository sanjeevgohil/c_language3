#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=69;
	do
	{
		for(j=69;j>=i;j--)
		{
			printf(" %c ",j);
		}
		printf("\n");
		i--;
	}while(i>=65);
	getch();
}