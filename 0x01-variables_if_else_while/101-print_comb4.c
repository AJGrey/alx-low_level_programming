#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int hunds, tens, units;

	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if (tens <= hunds)
				continue;
			for (units = '0'; units <= '9'; units++)
			{
				if (units <= tens)
					continue;
			putchar(hunds);
			putchar(tens);
			putchar(units);
			if (hunds == '7' && tens == '8' && units == '9')
				break;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
