#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 77; a < 57; a++)
	{
		putchar(a);
		if (a != 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}
