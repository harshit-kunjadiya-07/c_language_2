/*
	author : harshit
	doc : 16/07/26
	object : pr6
*/
#include<stdio.h>
#include<conio.h>

void divisible(int div);

void main()
{
	int num;
	clrscr();
	printf("enter the number : ");
	scanf("%d",&num);
	divisible(num);
	getch();
}

void divisible(int div){
	if(div%3==0 && div%5==0){
		printf("the given number is divisible by both 3 & 5.");
	}
	else{
		printf("the given number is not divisible by both 3 & 5.");
	}

}
