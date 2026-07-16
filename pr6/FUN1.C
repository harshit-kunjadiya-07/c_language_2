/*
	author : harshit
	doc : 16/07/26
	object : pr6
*/
#include<stdio.h>
#include<conio.h>

void cube(int n);

void main()
{
	int num;
	clrscr();
	printf("enter the number : ");
	scanf("%d",&num);
	cube(num);
	getch();
}

void cube(int n){
	printf("answer is : %d",n*n*n);
}