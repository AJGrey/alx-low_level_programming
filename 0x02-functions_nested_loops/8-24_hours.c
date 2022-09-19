#include "main.h"

/**
 * jack_bauer - a function to print all the hours in the day
 * Return: 0 Always
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar('\n');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar('\n');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
				_putchar('\n');
			}
			else if (j > 10)
			{
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			}
		}
	}
}
