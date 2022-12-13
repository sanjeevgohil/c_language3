#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
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
	}
	getch();
}