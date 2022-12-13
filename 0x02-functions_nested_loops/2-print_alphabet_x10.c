#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a * 10);
	}
	_putchar('\n');
}
