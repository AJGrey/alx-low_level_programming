#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a program to print numbers, followed by  new linw
 * @separator: delimiter to use
 * * @n: number of numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
