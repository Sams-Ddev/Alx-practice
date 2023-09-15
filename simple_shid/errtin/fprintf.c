#include <stdio.h>

int main(void)
{
	FILE *file = fopen("output.txt"."w+");
	if (file == NULL)
	{
		return (1);
	}

	fprintf(file, "Hello, world!\n");

	fclose(fd);

	retyurn (0);

}
