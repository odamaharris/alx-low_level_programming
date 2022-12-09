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

	for (char a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
