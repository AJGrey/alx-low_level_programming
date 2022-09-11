#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
	putchar(A);
	}
	putchar('\n');
	return (0);
}
