#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * @b: represent last didgit
 *
 * Return: according to code
 */

int print_last_digit(int b)
{
	int b = n % 10;

	if (b < 0)
		b *= -1;
	_putchar(b + '0');
	return (0);
}
