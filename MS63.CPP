#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	while(i<=5)
	{
		for(j=5;j>=1;j--)
		{
			if(i==j)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
		i++;
	}
	getch();
}