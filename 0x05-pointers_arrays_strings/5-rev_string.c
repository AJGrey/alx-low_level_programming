#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @str: is the string to reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int l, i;
	char ch;

	for (i = 0; s[l] != '\0'; l++)
		for (i = 0; i < l / 2; i++)
		{
			ch = s[l];
			s[l] = s[l - 1  -i];
			s[l -1 -i] = ch;
		}
}
