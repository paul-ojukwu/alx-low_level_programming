#include "main.h"

/**
 * leet-encodes a string to 1337
 * @s: string to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	char temp[8];
	int k;

	temp[0] = 'o';
	temp[1] = 'l';
	temp[3] = 'e';
	temp[4] = 'a';
	temp[7] = 't';

	for (i = 0; s[i]; i++)
	{
		for (k = 0; k <= 7; k++)
		{
			if (s[i] == temp[k] || s[i] + 32 == temp[k])
			{
				s[i] = '0' + k;
			}
		}
	}
	return (s);
}
