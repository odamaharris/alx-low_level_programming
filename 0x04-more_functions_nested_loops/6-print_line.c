#include "main.h"

/**
 * print_line - print line using _
 *
 * @n: represent interger
 *
 * Return: void
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (l = 0; l < n; l++)
		_putchar(95);
	_putchar('\n');
	}
}
