#include "main.h"
/**
 * string_toupper - copies a string to another string
 *
 * @dest: the buffer
 *
 * Return: pointer to the resulting string @dest
 */

char *string_toupper(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] &= ~(32);
		i++;
	}
	return (dest);
}
