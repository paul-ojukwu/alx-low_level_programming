#include "main.h"
/**
 * cap_string-capitalizes all words in a string
 * @s: strin to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;
	
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
