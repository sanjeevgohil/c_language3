#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	A:
	{
		for(j=5;j>=1;j--)
		{
			if(i%2==0&&j%2==0)
			{
				printf("   ");
			}
			else
			{
				printf(" * ");
			}
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