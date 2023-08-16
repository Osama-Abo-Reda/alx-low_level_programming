#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 time,
 * followed by a new line
 *
*/

void print_alphabet_x10(void)
{
	char num;
	int i = 0;

	while (i < 10)
	{
		for (num = 'a'; num <= 'z'; num++)
			_putchar(num);

		_putchat('\n');
		i++;
	}
}
