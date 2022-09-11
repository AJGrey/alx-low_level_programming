#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int tens, units, k;
	
	k = '1';
	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = k; units <= '9'; units++)
		{
			putchar(tens);
			putchar(units);
			if (tens == '8' && units == '9')
				break;
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	return (0);
}

