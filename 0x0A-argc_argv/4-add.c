#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num:check strings there are digits
 * @str:magi koro e array
 *
 * Return:kila time toa 0 (Success)
 */
int check_num(char *str)
{
	
	unsigned int counting;

	counting = 0;
	while (counting < strlen(str)) 

	{
		if (!isdigit(str[counting]) )
		{
			return (0);
		}

		counting++;
	}
	return (1);
}

/**
 * main : to Print the name of the program
 * @argcm to do the  Count on  arguments
 * @argv: Arguments vectors
 *
 * Return: Always 0 always to show success
 */

int main(int argc, char *argv[])

{


	int counting;
	int strata_too_inta;
	int hesabu = 0;

	counting = 1;
	while (counting < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			strata_too_inta = atoi(argv[count]); /*ATOI --> convert string to int*/
			hesabu += strata_too_inta;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		counting++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}







