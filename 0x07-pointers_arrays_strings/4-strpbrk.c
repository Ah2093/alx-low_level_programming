#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *c)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j =0 ; c[j] >= '\0'; j++)
			if (s[i] == c[j])
				return (s + i);
	}

	return (NULL);
}
