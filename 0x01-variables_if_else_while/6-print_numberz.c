#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting
 * from 0 only use the putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
