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

	for (num ='0'; num <= 'f'; num++)
	{
		putchar('%x');
	}
	putchar('\n');
	return (0);
}

