#include "main.h"

/**
 * string_toupper - a function to convert lowercase string to uppercase
 * @str: string tobe changed
 *
 * Return: address to the string
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
