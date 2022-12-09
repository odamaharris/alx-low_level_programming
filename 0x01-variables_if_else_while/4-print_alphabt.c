#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
}

