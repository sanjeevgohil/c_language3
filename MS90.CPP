#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	while(i<=5)
	{
		printf(" %d ",i);
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		i++;
	}
	getch();
}