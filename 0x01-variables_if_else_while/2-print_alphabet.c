#include <stdio.h>

/*
 * main - prints alphabets using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
