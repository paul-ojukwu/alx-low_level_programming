#include "main.h"
#include <stdlib.h>

/**
 * create_array-creates an array of chars
 * @size: size of the array
 * @c: initializer
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	if (size == 0)
		return ('\0');

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return ('\0');
	*ptr = c;
	return (ptr);
}
