#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	A:
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
	if(i>=1)
	{
		goto A;
	}
	getch();
}