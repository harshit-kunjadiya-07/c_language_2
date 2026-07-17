/*
			author : harshit
			doc : 16 / 7 / 26
			objective : pr6
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i, j, flag = 1;

    clrscr();

    printf("Enter any string: ");
    scanf("%s", str);

    for (j=0;str[j] != '\0';j++);
    j--;

    for (i=0;i<j;i++,j--)
    {
	if (str[i] != str[j])
	{
	    flag = 0;
	    break;
	}
    }

    if (flag == 1)
	printf("\nThe given string is a Palindrome.");
    else
	printf("\nThe given string is Not a Palindrome.");

    getch();
}