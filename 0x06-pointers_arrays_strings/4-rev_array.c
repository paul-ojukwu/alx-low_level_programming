#include "main.h"

/**
 * reverse_array-reverses the content of an array
 * @a: pointee to the array
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int *start_ptr;
	int *end_ptr;
	int temp;

	start_ptr = &a[0];
	end_ptr = &a[n - 1];
	for (i = 0; i < (n / 2); i++)
	{
		temp = *(start_ptr + i);
		*(start_ptr + i) = *(end_ptr - i);
		*(end_ptr - i) = temp;
	}
}
