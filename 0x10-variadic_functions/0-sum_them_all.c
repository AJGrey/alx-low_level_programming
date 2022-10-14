#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a program to sum all the numbers
 * @n: numbers
 *
 * Return: result upon success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list mynumbers;

	va_start(mynumbers, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(mynumbers, int);
	va_end(mynumbers);
	return (sum);
	}
	if (n == 0)
		return (0);
}
