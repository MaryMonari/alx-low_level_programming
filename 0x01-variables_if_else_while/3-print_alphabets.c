#include <stdio.h>

/**
 * main - entry point
 * prints the alphabet in lowercase, in uppercase, then a new line
 * Return:always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
