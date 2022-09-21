#include "main.h"

/**
 * _strcat - a function to concatenate strings
 * @dest: the string that will be appended
 * @src: the string to be concatenated upon
 *
 * Return: 0 always
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
