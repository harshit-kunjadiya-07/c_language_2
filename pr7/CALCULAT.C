x/*
	author : harshit
	doc : 20/07/26
	object : pr7
*/
#include<stdio.h>
#include<conio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
void mod(int a, int b);

void main()
{
	int choice,a,b;
	clrscr();
	while(1)
	{
		printf("\n\n=========================");
		printf("\ninput/output");
		printf("\npress 1 for +");
		printf("\npress 2 for -");
		printf("\npress 3 for *");
		printf("\npress 4 for /");
		printf("\npress 5 for %");
		printf("\npress 0 for the exit");
		printf("\n=========================");
		printf("\n\nenter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 : printf("\nenter the first number : ");
				 scanf("%d",&a);
				 printf("\nenter the second number : ");
				 scanf("%d",&b);
				 add(a,b);
					 break;

			case 2 : printf("\nenter the first number : ");
				 scanf("%d",&a);
				 printf("\nenter the second number : ");
				 scanf("%d",&b);
				 sub(a,b);
				 break;

			case 3 : printf("\nenter the first number : ");
				 scanf("%d",&a);
				 printf("\nenter the second number : ");
				 scanf("%d",&b);
				 mul(a,b);
				 break;

			case 4 : printf("\nenter the first number : ");
				 scanf("%d",&a);
				 printf("\nenter the second number : ");
				 scanf("%d",&b);
				 div(a,b);
				 break;

			case 5 : printf("\nenter the first number : ");
				 scanf("%d",&a);
				 printf("\nenter the second number : ");
				 scanf("%d",&b);
				 mod(a,b);
				 break;

			case 0 : exit(0);

			default : printf("enter valid number!!");
		}
	}

	getch();
}

void add(int a, int b){
	printf("\naddition of %d and %d is : %d",a,b,a+b);
}
void sub(int a, int b){
	printf("\nsubtraction of %d and %d is : %d",a,b,a-b);
}
void mul(int a, int b){
	printf("\nmultiplication of %d and %d is : %d",a,b,a*b);
}
void div(int a, int b){
	printf("\ndivision of %d and %d is : %d",a,b,a/b);
}
void mod(int a, int b){
	printf("\modulo of %d and %d is : %d",a,b,a%b);
}