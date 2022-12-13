#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf(" %c ",j+64);
			}
			else
			{
				printf(" %c ",j+96);
			}
		}
		printf("\n");
	}
	getch();
}