#include "main.h"

/**
 * _memcopy - Entry point
 * @dest: pointed destination
 * @src: pointed source
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memcopy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
