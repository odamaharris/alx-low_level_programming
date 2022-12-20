#include <stdio.h>
#include "main.h"

/**
 * _strcpy - prints n elements of an array of integers
 *
 * @dest: pointer
 * @src: number of element in array
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
