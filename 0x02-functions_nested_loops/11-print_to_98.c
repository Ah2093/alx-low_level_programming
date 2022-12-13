#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function print n1 >> 98
 * @n1: the first intger as input
 * print : the number between n1 and 98
 */

void print_to_98(int n1)
{
	int n;

	if (n1 < 98)
	{
		for (n = n1 ; n <= 98 ; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		putchar('\n');
	}
	else
	{
		for (n = n1 ; n >= 98 ; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		putchar('\n');
	}
}
