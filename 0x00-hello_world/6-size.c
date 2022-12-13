#include <stdio.h>
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

	printf("size of char: %zu byte(S)\n", sizeof(a));
	printf("size of int: %zu byte(S)\n", sizeof(b));
	printf("size of long int: %zu byte(S)\n", sizeof(c));
	printf("size of long long int: %zu byte(S)\n", sizeof(d));
	printf("size of float: %zu byte(S)\n", sizeof(f));
	return (0);
}
