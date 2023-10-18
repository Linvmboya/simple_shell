#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * _strcpy - copies string pointed to by src includingiiull terminating byte
 * @dest: pointer to buffer in which we copy the string
 * @src: string to be copied
 * @n: number of bytes to copy from src to dest
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src, size_t n)
{
	int len = 0, m;

	while (src[len] != '\0')
	{
		len++;
	}
	for (m = 0; m < len; m++)
	{
		dest[m] = src[m];
		n--;
	}
	dest[m] = '\0';
	return (dest);
}
