#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * @n: represent last didgit
 *
 * Return: according to code
 */

int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
		b *= -1;

	_putchar('0' + b);

	return (0);
}
