#include "main.h"

/**
 * rot13 - capitalizes all words of a string
 *
 * @z: the string to look at
 *
 * Return: the capitalized string
 */

char *rot13(char *z)
{
	bool rev;

	int i;

	i = 0;
	while (z[i] != '\0')
	{
		if ((z[i] >= 'A' && z[i] <= 'M') || (z[i] >= 'a' && z[i] <= 'm'))
			z[i] -= 13;
		i++;
	}
	return (z);
}
