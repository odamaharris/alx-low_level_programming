#include "main.h"
/**
 * set_bit - Sets value of a bit at an index to 1
 * @n: points the bit
 * @index: index to set value at - indices start at 0
 * Return: if error - -1 else - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
			*n ^= (1 << index);

				return (1);
}
