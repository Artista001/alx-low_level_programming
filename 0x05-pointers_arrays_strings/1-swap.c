#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: This is the first integer
 * @b: This is the second integer
 *
 */
void swap_int(int *a, int *b);
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
