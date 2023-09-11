#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t myPPID;

	myPPID = getppid();
	printf("%u\n", myPPID);
	return (0);
}
