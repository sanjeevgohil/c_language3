#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=1;
	A:
	{
		for(s=5;s>i;s--)
		{
			printf("   ");
		}
		for(j=i;j>=1;j--)
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