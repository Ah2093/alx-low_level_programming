#include "main.h"

/**
 * _isalpha - a function that checks for lowercase or uppercase character
 * @c: single letter input
 * Return: 1 if char c  is letter  lowercase or uppercase , 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
