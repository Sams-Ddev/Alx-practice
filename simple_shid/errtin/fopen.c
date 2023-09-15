/**
 * The fopen() function in C is a standard library function that opens a file.
 * It takes two arguments:
 * pathname : The path to the file to be opened.
 * mode : A string that specifies the mode in which the file should be opened.
 *
 * The possible values for the mode string are:
 * r : Opens the file for reading only.
 * w : Opens the file for writing only. If the file exists, its contents are overwritten.
 * If the file does not exist, it is created.
 *
 * a : Opens the file for appending. Any data written to the file is appended to the end of the
 * existing contents. If the file does not exist, it is created.
 *
 * r+ : Opens the file for both reading and writing.
 * w+ : Opens the file for both reading and writing. If the file exit are overwritten.
 * If the file does not exist, it is created.
 */

int main(void)
{
	file = fopen("test.txt", "w");

	if (file == |NULL)
	{
		/* do sometin with file*/
	}
	else
	{
		/* else do something with the file */
	}
}
