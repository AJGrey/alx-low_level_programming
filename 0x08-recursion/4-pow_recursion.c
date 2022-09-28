#include "main.h"

/**
 * _pow_recursion - a function that returns the exponentiation of a value
 * @x: number to be used
 * @y: exponential
 *
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
