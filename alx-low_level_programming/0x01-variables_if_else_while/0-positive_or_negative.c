#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Program - 
 *
 * This program will assign a random number to the variable 
 * n each time it is executed.
 *
 * The Complete the source code in order to print whether 
 * the number stored in the variable n is positive or negative.
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n < 0)
		printf("The number %d is negative\n", n);
	else
		printf("The number %d is a positve\n", n);

	return (0);
}
