#include <stdio.h>
#include "main.h"
#include <stdbool.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int count;

	while (true)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}

