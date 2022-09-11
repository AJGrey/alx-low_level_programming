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

	for (tens1 = '0'; tens1 <= '9'; tens1++)
	{
		for (units1 = '0'; units1 <= '9'; units1++)
		{
			for (tens2 = '0'; tens2 <= '9'; tens2++)
			{
				if (tens2 <= tens1)
				continue;
				for (units2 = '0'; units2 <= '9'; units2++)
				{
					if (units2 <= units1)
						continue;
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
