#include <stdio.h>

/**
 * numlen - returns length of string
 * @n: number
 * Return: number of digits
 */

int numlen(int n)
{
	int l = 0;

	if (!n)
	{
		return (1);
	}
	while (n)
	{
		n = n / 10;
		l += 1;
	}
	return (l);
}
/**
 * main - first 98 fibonaci number
 * Return: Always 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f10 = 0, f20 = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f10 > 0)
			printf("%lu", f10);
		initial0s = numlen(mx) - 1 - numlen(f1);
		while (f10 > 0 && initial0s > 0)
		{
			printf("%i", 0)
			initial0s--;
		}
		printf("%lu", f1);
		tmp = (f1 + f2) % mx;
		tmpo = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = tmp;
		f20 = tmpo

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
