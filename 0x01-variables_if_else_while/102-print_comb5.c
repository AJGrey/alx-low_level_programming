#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, units1;
	int tens2, units2;
	int a, b;

	for (tens1 = '0'; tens1 <= '9'; tens1++)
	{
		a = tens1;
		for (units1 = '0'; units1 <= '9'; units1++)
		{
			b = units1;
			b++;
			for (tens2 = a; tens2 <= '9'; tens2++)
			{
				for (units2 = b; units2 <= '9'; units2++)
				{
					putchar(tens1);
					putchar(units1);
					putchar(' ');
					putchar(tens2);
					putchar(units2);
					if (tens1 == '9' && units1 == '8' && tens2 == '9' && units2 == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
