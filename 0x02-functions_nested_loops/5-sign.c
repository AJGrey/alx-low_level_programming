#include "main.h"

/**
 * print_sign - is a function that will tell the sign a given number
 * @n: is the argument that will be used for the function
 * Return: 0 Alwasy (Success)
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1);

	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

