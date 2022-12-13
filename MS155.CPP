#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=5;
	do
	{
		for(s=i;s>1;s--)
		{
			printf("   ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i--;
	}while(i>=1);
	getch();
}