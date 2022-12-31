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
	int status;

	i = 0;
	j = 0;
	while (needle[i])
	{
		status = 1;

		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				status = 0;
				j++;
				break;
			}
			j++;
		}
		if (status == 1)
		{
			return ('\0');
		}
		i++;
	}
	return (needle);
}
