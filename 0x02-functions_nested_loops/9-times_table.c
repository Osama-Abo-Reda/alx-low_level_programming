#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num, multi, total;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			total = num * multi;

			if (tota; <= 9)
				_putchar(' ');
			else
				_putchar((total / 10) + 48);

			_putchar((total % 10) + 48);
		}
		_putchar('\n');
	}
}
