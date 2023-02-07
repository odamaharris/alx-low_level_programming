#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: points to name of the file
 * @text_content: string to be added at end of file
 *
 * Return: If the function fails or filename is NULL - -1 else - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
