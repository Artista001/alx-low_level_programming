#include "main.h"
/**
 * _puts - function that prints a string followed by a new line to stdout
 * @str: This is the input string
 */
void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
