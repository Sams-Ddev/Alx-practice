#include <stdio.h>

/**
 * main - entry to the prgram that demosnstrate the  use
 * of fopen() and fclose() std library calls
 *
 * Return: 0.
 */

int main()
{
	FILE *filePtr;
	
	/*---Opening a file for writng-------*/
	filePtr = fopen("example.txt", "w");
	
	/* Handling error  messages*/
	if (filePtr == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	/*----Closing the file----*/
	if (fclose(filePtr) != 0)
	{
		perror("Error closing file");
		return (1);
	}
	return (0);
}

/*--------------summary--------------------------*/
/**
 * This program opens a file named "example.txt"
 * for writing and then closes it. If any errors occur
 * during these operations, it will print an error message.
 */
