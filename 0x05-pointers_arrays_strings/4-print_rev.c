#include "main.h"

/**
 * print_rev-prints a string in reverse order
 * _putchar-prints to stdout
 * @s: strimg to be printed in reverse order
 */
void print_rev(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		counter++;
	}
	for (i = counter; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
