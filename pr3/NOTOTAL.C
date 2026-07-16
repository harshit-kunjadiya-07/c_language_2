/*
	author : harshit
	doc : 2/07/2026
	objective : total digit count
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num , count=0;
	clrscr();
	printf("enter any number :");
	scanf("%d",&num);

	if(num==0)
	{
		count=1;
	}
	else
	{
		while(num !=0)
		{
		count++;
		num= num /10;
		}
	}
	printf("total number  of digit :%d",count);
	getch();

}
