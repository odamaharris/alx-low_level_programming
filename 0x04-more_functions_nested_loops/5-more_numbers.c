#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, c;
	
	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar((num / 10) + '0');
			_putchar('\n');
		}
	}
}
