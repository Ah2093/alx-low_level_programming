#include "main.h"

/**
 * _isupper - a function to check if the c is uppercase or not
 * @c:paramter
 * Return: 1 if c uppercase , 0  otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
