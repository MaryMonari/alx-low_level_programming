#include <stdio.h>
/**
 * main - entry point
 * program that prints the alphabet in lowercase,except q,e then a new line
 * Return: always 0
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
