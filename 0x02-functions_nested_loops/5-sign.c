#include "main.h"

/**
 * print_sign -a function that checks for + , 0 ,- numbers
 * @n: intger input
 * Return: 1 if int n  + else if int n - , 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
