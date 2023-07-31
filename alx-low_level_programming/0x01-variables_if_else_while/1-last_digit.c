#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * This program will assign a random number to the variable
 * n each time it is executed. 
 *
 * The Ccompleted the source code in order to print
 * the last digit of the number stored in the variable n.
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;	/* Randomly generated number*/
	int r;	/* The last digit of the n = random number*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	r = n % 10;

	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	else if (r == 0)
		printf("Last digit od %d is %d and is 0\n", n, r);
	else if  (r < 6 && r != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, r);
	else if (r < 0)
	{
		r = -r
		printf("The remainder %d is a negative", r);
	}
	return (0);
}
