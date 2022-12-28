#include "main.h"

/**
 * _strchr-locates a character in a string
 * @s: string
 * @c: character to be located in string
 * Return: a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	return (&s[i]);
}
