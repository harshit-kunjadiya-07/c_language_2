/*
	author : harshit
	doc : 5/07/26
	object : pr4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=11;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
	getch();

}
