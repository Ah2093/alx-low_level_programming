#include "main.h"

/**
 * _strchr - Entry point
 * @s: pointed destination
 * @b: constant byte
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char b)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		if (s[i] == b)
			return (s + i);
	return (NULL);
}
