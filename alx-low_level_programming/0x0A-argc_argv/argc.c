#include <stdio.h>
#include <stdlib.h>

/**
 * The program demonstates the use of argc and arrgv[]
 * and prints out the values each is holding
 *
 * Return - EXIT_SUCCESS on completion
 */

int main(int argc, char *argv[])
{
	printf("The value of argc =\t %d\n", argc);

	/* Displaying what is inside of argv */
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("The argv[%d] = %s\n", i, argv[i]);
	}

	return EXIT_SUCCESS;
}
