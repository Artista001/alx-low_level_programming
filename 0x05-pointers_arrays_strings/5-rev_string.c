#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: Pointer to a string
 *
 */
void rev_string(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
