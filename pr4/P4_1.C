/*
	author : harshit
	doc : 5/07/26
	object : pr4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=41;j<=i+40;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}