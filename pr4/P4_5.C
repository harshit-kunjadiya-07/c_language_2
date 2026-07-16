/*
	author : harshit
	doc : 5/07/26
	object : pr4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		 for(k=1;k<=5-i;k++)
		 {
			 printf(" ");
		 }
		 for(j=6-i;j<=5;j++)
		 {
			 printf("%d",j);
		 }
		 for(j=4;j>=6-i;j--)
		 {
			 printf("%d",j);
		 }
		 printf("\n");
	}
	getch();

}