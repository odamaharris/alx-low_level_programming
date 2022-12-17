#include "main.h"
#include <stdio.h>

/**
 * Fizz_Buzz - print number 1 to 100
 *
 * Return: Always 0
 */

void Fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 15) == 0)
			printf("FizzBuzz");
		else if (i == 100)
			printf("Buzz");
		else
			printf("%d", i);

	printf(" ");
	}
	printf("\n");
	return (0);
}
