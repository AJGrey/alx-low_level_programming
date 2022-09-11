#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 *
 *
 */
int main(void)
{
        char A, a;

        for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	for (a = 'a'; a <= 'z'; a++)
        {
                putchar(a);
        }
        putchar('\n');
        return (0);
}
