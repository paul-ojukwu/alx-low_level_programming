#include "main.h"

/**
 * _strstr-locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: poinyer to the beginning of the located string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int status = 1;
	int new_j;

	j = 0;
	while (haystack[j] != '\0')
	{
		if (needle[0] == haystack[j])
		{
			new_j = j;
			status = 0;
			break;
		}
		j++;
	}
	if (status == 1)
	{
		return ('\0');
	}
	else if (status == 0)
	{
		i = 1;

		while (needle[i] != '\0')
		{
			j += 1;
			if (needle[i] != haystack[j])
			{
				return ('\0');
			}
			i++;
		}
		return (&haystack[new_j]);
	}
	return (0);
}
