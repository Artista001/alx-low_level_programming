#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * _abs - prints the absolute value of an integer
 * @n: The character to be checked
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int _abs(int n)
	{
		if (n < 0)
		{
			return (-n);
		}
		else
		{
			return (n);
		}
		int abs_n = _abs(n);
		int last_digit = abs_n % 10;

		_putchar(last_digit + '0');

		return (last_digit);
	}
}
