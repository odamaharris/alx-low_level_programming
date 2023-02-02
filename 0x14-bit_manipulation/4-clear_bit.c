#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: points to the bit
 * @index: index to set the value
 *
 * Return: If error occurs - -1 else - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
