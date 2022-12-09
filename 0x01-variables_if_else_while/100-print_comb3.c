#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int j;
		 for (j = i + 1 ; i < 10; i++)
		 {
			 putchar(i + '0');
			 putchar(j + '0');
			 if (i != 8)
			 {
				 putchar(',');
				 putchar(' ');
			 }

		 }
	}
	printf("\n");	
	return (0);
}
