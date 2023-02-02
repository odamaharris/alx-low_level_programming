#include "main.h"

/**
 * get_bit - Gets the value of bit
 *
 * @n: representing bit
 * @index: representing index
 *
 * Return: If error - -1. else - value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
