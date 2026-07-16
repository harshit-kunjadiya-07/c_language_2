/*
	author : harshit
	doc : 7/07/2026
	objective : pr4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==3)
			{
				printf("* ");
			}
			else if((i==2 && (j==1 || j==5)) || (i>3 && j==1))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();

}