/*
	author : harshit
	doc : 2/07/2026
	objective : fisrt and last digit count
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,flag=1,digit;
	clrscr();
	printf("enter the value of number :");
	scanf("%d",&n);
	sum = n%10;

	while(flag){
		if(n<10)
		{
		sum = sum + n;
		flag=0;
		}
		else
		{
		n = n/10;
		}
	}
	printf("sum of first and last digit : %d",sum);
	getch();

}