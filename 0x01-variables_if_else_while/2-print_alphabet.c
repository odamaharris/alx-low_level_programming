#include <stdio.h>
#include <stdlib.h>

/**
 * main - prit lower case alpabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char b = 'b';

	for (char a; a <= b; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
