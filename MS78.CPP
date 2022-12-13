#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	while(i<=5)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2==0&&j%2==0)
			{
				printf(" # ");
			}
			else
			{
				printf(" * ");
			}
		}
		printf("\n");
		i++;
	}
	getch();
}