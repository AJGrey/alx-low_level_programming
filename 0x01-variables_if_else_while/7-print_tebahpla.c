#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	char ad;

	for (ad = 'z'; ad >= 'a'; ad--)
		putchar(ad);
	putchar('\n');
	return (0);
}

