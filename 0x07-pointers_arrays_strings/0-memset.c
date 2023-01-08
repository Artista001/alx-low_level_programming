#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @b: the desired value
 * @n: number of bytes to be changed
 * @s: Starting address of the memory to be filled
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
