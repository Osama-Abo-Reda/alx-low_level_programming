#include "main.h"

/**
 *  print_alphabet - function print alphabet by using _putchar function
 *
*/

void print_alphabet(void)
{
	char num;

	for (num = 'a'; num <= 'z'; num++)
		_putchar(num);

	_putchar('\n');
}
