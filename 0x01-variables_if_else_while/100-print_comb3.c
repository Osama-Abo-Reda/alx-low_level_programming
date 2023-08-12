#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 90; i++)
	{
		if (i == 10 || i == 11)
			i++;
		if (i == 20 || i == 21 || i == 22)
			i++;
		if (i == 30 || i == 31 || i == 32 || i == 33)
			i++;
		if (i == 40 || i == 41 || i == 42 || i == 43 || i == 44)
			i++;
		if (i == 50 || i == 51 || i == 52 || i == 53 || i == 54)
			i++;
		if (i == 55 || i == 60 || i == 61 || i == 62 || i == 63)
			i++;
		if (i == 64 || i == 65 || i == 66 || i == 70 || i == 71)
			i++;
		if (i == 72 || i == 73 || i == 74 || i == 75 || i == 76)
			i++;
		if (i == 77 || i == 80 || i == 81 || i == 82 || i == 83)
			i++;
		if (i == 84 || i == 85 || i == 86 || i == 87 || i == 88)
			i++;
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
