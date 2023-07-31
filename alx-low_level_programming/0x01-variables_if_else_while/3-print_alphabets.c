#include <stdio.h>

/*Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 *
 * You can only use putchar three times in your code
 */


int main()
{
	char c, C;
	
	c = 'a';
	while (c <= 'z')
        {
		putchar(c);
		c++;
        }

	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);

        putchar('\n');
        return (0);
}
