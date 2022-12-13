#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	while(i>=1)
	{
		for(j=5;j>=i;j--)
		{
			if(i%2==0)
			{
				printf(" * ");
			}
			else
			{
				printf(" # ");
			}
		}
		printf("\n");
		i--;
	}
	getch();
}