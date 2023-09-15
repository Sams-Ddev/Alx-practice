#include <stdio.h>

int main(void)
{
	FILE *file = fopen("output.txt", "w+");
	if (file == NULL)
	{
		return (1);
	}

	fprintf(file, "Hello, world!\n");

	fclose(file);

	return (0);

}

/*In this example, the fprintf() function is used to write the string "Hello, world!"
 * to the file output. txt . The fopen() function is used to open the file output.txt
 * for writing. The fclose() function is used to close the file output.txt.
 * The fprintf() function can be used to format output in a variety of ways.
 * The format string can contain conversion specifiers, which are used
 * to indicate the type of data that is being formatted.
 * For example, the following conversion specifiers can be used to format output:
 */
