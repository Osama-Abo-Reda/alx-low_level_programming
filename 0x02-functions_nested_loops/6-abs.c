#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @num: take an integer type input for function
 *
 * Return: 0
*/

int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;
	return (num);
}
