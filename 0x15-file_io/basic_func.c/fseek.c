#include <>
/**
 * In C, when you open a file using fopen(),
 * a file pointer is associated with that file.
 * This file pointer keeps track of your position within the file.
 * You use this pointer to read or write data at
 * specific locations within the file.
 */

/**
 * main - Seeking within a File (fseek()):
 *
 * Return: 0 on success.
 */
int main(void)
{
	FILE *filePtr;

	/*---opening and error handling----*/
	filePtr = fopen("example.txt", "r");

	if (filePtr == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	/*----This moves the file pointer 10 bytes from SEEK_SET----*/
	fseek(filePtr, 10, SEEK_SET);

	/*----reading data from new ptr * Loc----*/
	char buffer[6];
	size_t byteRead = fread(buffer, 1, 5, filePtr);

	if (bytesRead > 0)
	{
		buffer[bytesRead] = '\0'; // Null-terminate the string
		printf("Read data: %s\n", buffer);
	}
	else
	{
		printf("No data read or an error occurred.\n");
	}

	/*-------closing the file------*/
	if (fclose(filePtr) != 0)
	{
		perror("Error closing file");
		return (1);
	}
	return (0);
}

/*---------summary------------*/
/**
 * In this example, we open the "example.txt" file
 * for reading and then use fseek() to move the file pointer 10 bytes
 * from the beginning of the file.
 * You can adapt this code to your specific needs when working with files.
 */
