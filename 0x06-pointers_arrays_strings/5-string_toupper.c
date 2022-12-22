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

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] >= 97 && z[i] <= 122)
			z[i] -= 32;
	}
	return (dest);
}
