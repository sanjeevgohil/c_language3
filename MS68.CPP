#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	i=1;
	A:
	{
		for(j=5,k=1;j>=1;j--,k++)
		{
			if(i==j||i==k)
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
	if(i<=5)
	{
		goto A;
	}
	getch();
}