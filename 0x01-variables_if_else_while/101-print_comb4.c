#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		 for (j = i+1; j < 9; j++)
		 {
			 int l  ;
			 for (l = j + 1 ; l < 10; l++)
			 {
			 	putchar(i + '0');
			 	putchar(j + '0');
			 	putchar(l + '0');
			 	if (i != 7)
			 	{
					 putchar(',');
				 	putchar(' ');
			       	}
			 }
		 }
	}
	printf("\n");	
	return (0);
}
