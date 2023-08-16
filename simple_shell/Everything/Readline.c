#include <stdio.h>

/**
 * program that prints "$ ", wait for the user to enter
 * a command, prints it on the next line
 *
 * functions - man getline().
 */

int main(void)
{
	printf("$ ");
	getline();
}
