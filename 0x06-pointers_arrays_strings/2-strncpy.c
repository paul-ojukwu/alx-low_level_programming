#include "main.h"
/**
 * _strncpy-copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int length_src = 0;

	for (i = 0; *(src + i) != 0; i++)
	{
		length_src++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < length_src)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
