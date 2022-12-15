#include "main.h"

/**
 * print_triangle - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_triangle(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = n - i - 1 ; j > 0; j--)
				_putchar(' ');
			for (j = i ; j >= 0; j--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
