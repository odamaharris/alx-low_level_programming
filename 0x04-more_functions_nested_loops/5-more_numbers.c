#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, c;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
