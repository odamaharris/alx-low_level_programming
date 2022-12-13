#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char a = 1;
	int c;

	while (c++ <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);

		}
		_putchar('\n');
	}
}
