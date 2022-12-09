#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main doc*/
/** this func is the entery point to the program
* it is used to chech a single random number each time and
*  determine if it is +iv or -iv or zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
