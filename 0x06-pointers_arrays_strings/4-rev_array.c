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
	int i, s;

	n /= 2;
	for (i = 0; i < n; i++)
	{
		s = a[i];
		a[i] = a[i + n];
		a[i + n] = s;
	}
}
