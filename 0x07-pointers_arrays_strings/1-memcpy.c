#include "main.h"

/**
 * _memset-function that copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to the modified string
 */
char *_memset(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
