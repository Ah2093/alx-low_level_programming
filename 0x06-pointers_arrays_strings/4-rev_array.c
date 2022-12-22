#include "main.h"
/**
 * reverse_array - copies a string to another string
 *
 * @a: the array
 * @n: the size of array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, s;

	j = n / 2;
	for (i = 0; i < j; i++)
	{
		s = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = s;
	}
}
