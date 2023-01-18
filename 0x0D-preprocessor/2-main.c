#include <stdio.h>

/**
 * ain - prints the name of the file
 *
 * Return: Always 0 (Success)
 */

int ain(void)
{
	printf("%s\n", __file__);

	return (0);
}
