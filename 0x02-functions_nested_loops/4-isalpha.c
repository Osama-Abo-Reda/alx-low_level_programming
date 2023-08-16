#include "main.h"

/**
 * _isalpha - function  that checks for alphabetic character.
 *
 * @c: take inputs from other function
 *
 * Return: 1 if char is alphabet, otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
