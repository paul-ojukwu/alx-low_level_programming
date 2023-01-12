#include "main.h"
#include <stdlib.h>

/**
 * strtow-splits a string into words
 * @str: string to be split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, p, words = 0, length = 0, word_len = 0, k;
	char **ptr;
	char s[180];

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			length += 1;
			s[p] = str[i];
			words += 1;
		}
		if (str[i] == ' ')
		{
			if (str[i - 1] != ' ')
			{
				length += 1;
				s[p] = '\n';
				p += 1;
				words += 1;
			}
			else
				length += 0;
		}
	}
	length += 1;
	s[p] = '\n';
	ptr = malloc(sizeof(char *) * words);
	if (ptr == NULL)
		return NULL;
	p = 0;
	for (i = 0; i < words; i++)
	{
		for (; p < length; p++)
		{
			if (s[p])
				word_len += 1;
			else
			{
				word_len += 1;
				break;
			}
		}
		ptr[i] = malloc(sizeof(char) * word_len);
		if (ptr[i] == NULL)
			return (NULL);
		for (k = 0; k < word_len; k++)
		{
			ptr[i][k] = s[p];
			p += 1;
		}
		ptr[i][k] = '\n';
		word_len = 0;
	}
	return (ptr);
}
