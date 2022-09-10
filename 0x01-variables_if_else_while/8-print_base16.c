#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int num;
	chat ad;
	for (num = 0; num <= 9; num++)
	putchar(num % 10 + '0');
	for (ad = 'a'; ad <= 'f'; ad++)
	       putchar(ad);
	putchar('\n');
	return (0);
}

