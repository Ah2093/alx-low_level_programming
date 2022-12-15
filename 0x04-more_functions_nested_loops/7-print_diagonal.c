#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_diagonal(int n)
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
			for (j = 0; j < i; j++)
				_putchar(' ');
			_puchar('\');
			_putchar('\n');
		}
	}
}
