#include "main.h"
/**
 * cap_string-capitalizes all words in a string
 * @s: strin to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{

	int i = 0;

	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
