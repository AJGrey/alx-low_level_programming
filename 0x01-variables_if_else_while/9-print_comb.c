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

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
		if (num == '9')
		break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

