#include <stdio.h>

/**
 * main - entry point
 * prints the alphabet in lowercase, followed by a new line
 * Return:always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
