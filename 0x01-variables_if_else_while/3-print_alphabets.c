#include <stdio.h>

/**
 * main - entry point
 *
 * Description:prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
