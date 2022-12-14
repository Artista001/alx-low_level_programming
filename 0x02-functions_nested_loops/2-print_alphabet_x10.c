#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		_putchar(c);
		_putchar('\n');

		c++;
		if (c > 'z')
		{
			c = 'a';
		}
		i++;
	}
}
