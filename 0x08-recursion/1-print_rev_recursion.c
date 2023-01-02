#include "main.h"

/**
 * _print_rev_recursion-prints a string in reverse
 * _putchar-prints a character
 * @s: string to be reversed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
