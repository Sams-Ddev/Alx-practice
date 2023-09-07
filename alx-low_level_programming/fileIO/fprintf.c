#include <stdio.h>
/**
 * The fprintf() function in C is a stdio func that writes
 * formatted output to a stream. It takes three arguments;
 *
 * @stream: The stream to which the output should be written.
 * (file pointer/stdout, or a custom stream.
 * @format: A format string that specifies how the output should be formatted.
 */

int main()
{
	/* opens the pointer to the file "output.txt on harddrive"*/
	FILE *file = fopen("output.txt", "w");
	if (file == NULL)
	{
		return (1);
	}

	fprint(file, "Heloo, world!\n");

	fclose(file);
	return (0);
}
