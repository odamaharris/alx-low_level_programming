#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
	/* main prints alphabets using putchar*/
{
	/* main prints alphabets using putchar*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
