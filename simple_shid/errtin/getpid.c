#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t myPID;

	/* calls function function to store in myPID */
	myPID = getpid();
	printf("%u\n", myPID);
	return (0);
}
