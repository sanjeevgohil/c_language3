#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	A:
	{
		printf(" %d ",i);
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		i++;
	}
	if(i<=5)
	{
		goto A;
	}
	getch();
}