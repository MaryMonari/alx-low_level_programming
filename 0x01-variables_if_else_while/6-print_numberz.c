#include <stdio.h>

/**
 * main - entry point
 * print all single digit numbers of base 10 startingfrom 0 followed by newline
 * Return:always 0
 */

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
