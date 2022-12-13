#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - a function that return the last digit of a  given number
 *@n :paramete
 * Return: last digit of given number
 */

int print_last_digit(int n)
{
	int val, val2;

	val = abs(n);
	val %= 10;
	_putchar(val + '0');
	val2 = val * 10 + val;
	return (val2);
}
