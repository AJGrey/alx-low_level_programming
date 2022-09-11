#include<stdio.h>
/**
 * main - Entry point
 *
 * Return 0: always
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
		if (alpha == 'e' || alpha == 'q')
			alpha++;
	}
	putchar('\n');
	return (0);
}
