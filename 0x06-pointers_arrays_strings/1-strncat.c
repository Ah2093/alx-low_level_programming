#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the string @src is added to
 * @src: the string to be appended
 * @n:the number of char to add to dest
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;
	if(n <= len1)
	{
		for (i = 0; i <= n; i++)
		{
			dest[len2] = src[i];
			len2++;
		}
	}
	else
	{
		for (i = 0; i <= len1; i++)
		{
			dest[len2] = src[i];
			len2++;
		}
	}
	return (dest);
}
