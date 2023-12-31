#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: the int to check
 *
 * Return: 1 if n is greater than zero and print +
 * 0 if n is zero and print 0
 * -1 if n is less than 0 and print -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
