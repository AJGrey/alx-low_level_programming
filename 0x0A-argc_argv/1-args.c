#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: counts the arguments
 * @argv: arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
