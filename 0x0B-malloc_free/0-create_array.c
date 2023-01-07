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

	ptr = malloc(sizeof(char) * size);
	if (sizeof(ptr) == 0 || ptr == NULL)
		return ('\0');
	*ptr = c;
	return (ptr);
}
