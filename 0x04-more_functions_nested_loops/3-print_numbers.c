#include "main.h"
/**
 * print_numbers - a function that prints an integer
 * @num: integer to be printed
 *
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
