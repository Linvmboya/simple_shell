#include "shell.h"

/**
 * _strncmp - program that compares strings
 * @s1: value to compare
 * @s2: value to compare
 * Return: s1[m] - s2[m]
 */
int _strncmp(char *s1, char *s2)
{
	int m = 0;

	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
