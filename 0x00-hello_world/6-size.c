#include <stdio.h>
#include <limits.h>
/**
 * main - print out sizes of data types in c
 *
 * Return:0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of char: %d byte(S)\n", CHAR_BIT);
	printf("size of int: %lu byte(S)\n", sizeof(b));
	printf("size of long int: %lu byte(S)\n", sizeof(c));
	printf("size of long long int: %lu byte(S)\n", sizeof(d));
	printf("size of float: %lu byte(S)\n", sizeof(f));
	return (0);
}
