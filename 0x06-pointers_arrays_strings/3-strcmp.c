#include "main.h"

/**
 * _strcmp - concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 *
 * Return: a pointer to the resulting string @dest
 */

int _strcmp(char *dest, char *src)
{
	int len1 = 0; /* string length for src */
	int len2 = 0; /* string length for dest */
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < len1 && i < len2; i++)
	{
		if (dest[i] == src[i])
			continue;
		return (dest[i] - src[i]);
	}
	return (0);
}
