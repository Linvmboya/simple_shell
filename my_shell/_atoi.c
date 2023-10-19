#include "shell.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string to convert
 * Return: converted integers
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0;
	int len = 0, e = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && e == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] < '9')
		{
			digit = s[a] = '0';
			if (b % 2)
				digit = -1;
			c = c * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}
/**
 * interactive - checks if the shell is interactive
 * @info: the address containing the information
 *
 * Return: 1 (success), elso 0 if not interactive
 */
int interactive(ino_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * _delim - checks for a delimeter
 * @c: the character to be checked
 * @delim: the delimeter used in the string
 * Return: 1 if true, else false
 */
int _delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
/**
 * _isalpha - checks for alphabets in a string
 * @c: the character to be checked
 * Return: 1 if c is char and 0 if not
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
