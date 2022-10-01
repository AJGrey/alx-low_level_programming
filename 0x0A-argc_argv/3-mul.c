#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program to multiply two integers
 * @argc: counts the arguments
 * @argv: arguments
 *
 * Return: 0 upon success, Error if unsuccessful
 *
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (0);
}

