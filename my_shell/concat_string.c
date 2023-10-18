#include "shell.h"

/**
 * string_concat - concatenates two or more strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer to the string
 */
char *string_concat(int n, char *s1, char *s2, ...)
{
	char x;
	unsigned int m = 0, j = 0;
	unsigned int len1 = 0, len2;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		x = malloc(sizeof(char) * (len1 + n + 1));
	else
		x = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!x)
		return (NULL);
	while (m < len1)
	{
		x[m] = s1[m];
		m++;
	}
	while (n < len2 && m < (len1 + n))
		x[m++] = s2[m++];
	while (n >= len2 && m < (len1 + len2))
		x[m++] = s2[p++];
	x[m] = '\0';
	return (x);
}
