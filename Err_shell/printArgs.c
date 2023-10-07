#include <stdio.h>

extern char **environ;  /* Global variable containing environment variables*/

int main(void)
{
	char **args = environ;  /* Pointer to the array of environment variables*/

	/* Loop through the arguments and print each one*/
	while (*args)
	{
		printf("%s\n", *args);
		args++;
	}

	return 0;
}

