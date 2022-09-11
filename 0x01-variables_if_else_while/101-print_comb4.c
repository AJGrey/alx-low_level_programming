#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int hunds, tens, units, k;
	char i, j, _j;
	i ='1';
	j = '2';
	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (units = '0'; units <= '9'; units++)
			{
			putchar(hunds);
			putchar(tens);
			putchar(units);
			if (hunds == '7' && tens == '8' && units == '9')
				break;
			putchar(',');
			putchar(' ');
		}
                j++;
        }
	i++;
	_j++;
	j = _j;
}
	putchar('\n');
	return (0);
}
