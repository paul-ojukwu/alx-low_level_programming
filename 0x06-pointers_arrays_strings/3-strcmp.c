#include "main.h"

/**
 * _strcmp-compares two strings
 * @s1: first string
 * @s2: sencond string
 * Return: difference between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp;

	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		cmp = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			break;
		}
		i++;
	}
	return (cmp);
}
