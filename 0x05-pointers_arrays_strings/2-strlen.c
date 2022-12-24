#include "main.h"
/**
 * _strlen - function that retuens the length of a string
 * @s: This is the input string
 * Return: Length of the string
 *
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
