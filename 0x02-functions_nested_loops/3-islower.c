#include "main.h"

/**
 * _islower - main function
 *
 * @c: character to evaluate
 *
 * Return: Get 1 if c is uppercase,
 * get 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
