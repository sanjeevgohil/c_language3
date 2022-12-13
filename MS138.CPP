#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	i=5;
	while(i>=1)
	{
		for(s=i;s>1;s--)
		{
			printf("   ");
		}
		for(j=5;j>=i;j--)
		{
			printf(" %d ",j);
		}
		printf("\n");
		i--;
	}
	getch();
}