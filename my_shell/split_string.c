#include "shell.h"

/**
 * count_word - counts the number of words in a string
 * @s: the string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int x, y = 0, flag = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}

/**
 * split_string - programs that splits strings into word
 * @str: the string to be split
 *
 * Return: pointer to an array of string, else NULL
 */
char **split_string(char *str)
{
	char **matrix, *tmp;
	int m, n, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (m = 0; m < len; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (x)
			{
				end = m;
				*tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - x;
				n++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = m;
	}
	matrix[n] = NULL;
	return (matrix);
}

