#include "main.h"

/**
 * largest_number - return largest of 3
 *
 * @a: number one
 * @b: number two
 * @c: number three
 *
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
