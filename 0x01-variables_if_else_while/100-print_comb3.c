#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int o;
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			if (!((o == t) || (t > o)))
			{
				putchar(t);
				putchar(o);
				if (!(o == '9' && t == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
