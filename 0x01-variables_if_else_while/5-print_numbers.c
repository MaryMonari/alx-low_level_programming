#include <stdio.h>

/**
 * main - entry point
 * printall single digit numbers of base 10 starting from 0 followed by newline
 */

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
