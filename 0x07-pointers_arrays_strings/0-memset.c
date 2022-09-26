#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte
 * @s: address to memory
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block (dest)
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
