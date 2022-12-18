#include "main.h"

/**
 * length_of_string-calculates the length of a string
 * @str: string being considered
 * Return: length of the string
 */
int length_of_string(char *str)
{
	int i;
	int counter;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
