#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - a function that return the last digit of a  given number
 *@n :paramete
 * Return: last digit of given number
 */

int print_last_digit(int n)
{
	int val;

	val = (n % 10);
	if (val < 0)
	{
		val = (-1 * val);
	}

	_putchar(val + '0');
	return (val);
}
