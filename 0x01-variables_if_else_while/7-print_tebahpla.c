#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
