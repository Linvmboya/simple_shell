#include "shell.h"

/**
 * _getline - function that reads entire line from file or stream
 * @lineptr: a buffer holding the lines read
 * @n: current size of buffer
 * @stream: pointer of type FILE *
 * Return: number of characters read, else -1 on failure
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char m, *buffer;
	size_t x = 0;

	if (*lineptr == NULL || *n == 0)
	{
		*n = buff_size;
		*lineptr = malloc(*n);
		if (*lineptr == NULL)
			return (-1);
	}
	while ((m = (char)fgets(stream)) != EOF || c == '\0')
	{
		if (x >= *n - 2)
		{
			*lineptr = realloc(*lineptr, *n + 2);
			if (*lineptr == NULL)
				return (-1);
			*n = *n * 2;
		}
		*(*lineptr + x) = m;
		x++;
	}
	*(*lineptr + x) = '\0';
	return (*lineptr);
}
