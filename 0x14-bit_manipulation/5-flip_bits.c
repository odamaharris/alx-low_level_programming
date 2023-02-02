#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped
 *
 * @n: number
 * @m: number n flips to
 *
 * Return: The necessary number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		bit += (xor & 1);
		xor >>= 1;
	}
	return (bit);
}
