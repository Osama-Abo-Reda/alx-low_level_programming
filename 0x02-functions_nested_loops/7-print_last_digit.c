#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 * @num: take number input
 * Return: lastDigit
*/

int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
		lastDigit = -1 * (num % 10);
	else
		lastDigit = num % 10;
	_putchar(lastDigit + '0');

	return (lastDigit);
}
