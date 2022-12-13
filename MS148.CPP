#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=5;
	A:
	{
		for(s=i;s<5;s++)
		{
			printf("   ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
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