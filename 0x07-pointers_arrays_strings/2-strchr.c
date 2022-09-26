#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: first occurence of the character
 * @s: string to check
 *  * Return: NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
