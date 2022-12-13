#include "main.h"

/**
 * _abs -a function that checks for return the abs value of the input
 * @n: intger input
 * Return: n if int n>0 , -n else if int n<0 , 0 if otherwise
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-1 * n);
	return (0);
}
