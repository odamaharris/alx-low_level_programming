#include "main.h"

/**
 * _isdigit - checks if character is a gigit
 *
 * @c: represent character
 *
 * Return: 1 if c is digit. 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
