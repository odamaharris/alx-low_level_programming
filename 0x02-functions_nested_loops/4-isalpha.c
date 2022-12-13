#include "main.h"

/**
 * int _isalpha - checks if character is an alphabet
 *
 * @c: represent alphabet
 *
 * Return: 1 if its alphabet, 0 if its not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
