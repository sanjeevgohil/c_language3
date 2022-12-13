#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=69;
	A:
	{
		for(j=69;j>=i;j--)
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