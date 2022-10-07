#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenantes two strings
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes s2 to copy
 *
 * Return: char pointer to newly allocated piece in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/* declaring variables */
	unsigned int i, j, k;
	char *s;

/* @s1: first string */
	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
/* @s2: second string */
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
/* allocating memory to new string */
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < 1; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
