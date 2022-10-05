#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - a programs that add positive numbers
 * @argc: the counts of arguments
 * @argv: the arguments
 *
 * Return: 0 upon success, 1 if argument contains symbol
 *
 */
int main(int argc, char *argv[])
{
	int num, digit;
	int sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (isdigit(argv[num][digit]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (num = 1; num < argc; num++)
		{
		sum += atoi(argv[num]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

