#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int num, hex;

	for (num ='0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}

