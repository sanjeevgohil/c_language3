#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=1;
	do
	{
		for(s=5;s>i;s--)
		{
			printf("   ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i++;
	}while(i<=5);
	getch();
}