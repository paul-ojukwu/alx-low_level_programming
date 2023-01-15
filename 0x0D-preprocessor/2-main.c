#include <unistd.h>
int _putchar(char c);
/**
 * main-prints the name of the file it was compiled from
 * Return: 0
 */
int main (void)
{
	_putchar(__NAME__);
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
