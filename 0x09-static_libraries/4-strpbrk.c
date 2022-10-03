#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s
 * @s: the sting to check
 * @accept: string to compare
 *
 * Return: pointer to byte ins that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
