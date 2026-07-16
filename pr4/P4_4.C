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
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==1){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
			}
			printf("\n");
		}
	getch();
}