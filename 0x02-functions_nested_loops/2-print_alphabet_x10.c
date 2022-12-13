#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet_x10(void)
{
	int letter;

	for (letter = 0; letter <= 9; letter++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
