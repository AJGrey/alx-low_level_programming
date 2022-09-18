#include "main.h"
/**
 * print_alphabet_x10 - print 10times aiphabets
 * Description:this program will the alphabet 10times in lowercase
 * Return: 0 Always
 *
 */
void print_alphabet_x10(void)
{
	char i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
		_putchar('\n');
	}
}
