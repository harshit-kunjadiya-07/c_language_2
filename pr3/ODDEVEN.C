/*
	author : harshit
	doc : 2/07/2026
	objective : odd or enve
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int digit , n, even = 0,odd = 0, e=1,o=1;
	clrscr();
	printf("enter the number :");
	scanf("%d",&n);
	while (n>0)
	{
		digit = n%10;

		if(digit % 2==0)
		{
			even = even + digit*e;
			e=e*10;
		}
			else
			{
			odd = odd+digit*o;
			o=o*10;
		}
			n=n/10;
	}
	printf("even number is : %d\n",even);
	printf("odd number is : %d",odd);

	getch();

}