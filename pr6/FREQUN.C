<<<<<<< HEAD
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
    int i, j, flag, count;

    clrscr();

    printf("Enter any string: ");
    scanf("%s", str);

    printf("\nFrequency of each letter:\n");

    for (i=0;str[i] != '\0';i++)
    {
	flag = 1;
	for (j=0;j<i;j++)
	{
	    if(str[i] == str[j])
	    {
		flag = 0;
		break;
	    }
	}

	if (flag == 1)
	{
	    count = 0;
	    for (j=0; str[j] != '\0';j++)
	    {
		if (str[i] == str[j])
		{
		    count++;
		}
	    }

	    printf("%c => %d\n", str[i], count);
	}
    }

    getch();
}
=======
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
    int i, j, flag, count;

    clrscr();

    printf("Enter any string: ");
    scanf("%s", str);

    printf("\nFrequency of each letter:\n");

    for (i=0;str[i] != '\0';i++)
    {
		flag = 1;
		for (j=0;j<i;j++)
	{
	    if(str[i] == str[j])
	    {
			flag = 0;
			break;
	    }
	}

	if (flag == 1)
	{
	    count = 0;
	    for (j=0; str[j] != '\0';j++)
	    {
			if (str[i] == str[j])
			{
		   		count++;
			}
	    }

	    printf("%c => %d\n", str[i], count);
	}
}

    getch();
}
>>>>>>> ee3d6c11c6eedf9bd40eb775c1d87bd8ab638b74
