#include "main.h"
/**
 * _puts - function that prints a string followed by a new line to stdout
 * @str: This is the input string
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
