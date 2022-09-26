#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrices
 * @a: pointer to start of matrix
 * @size: width of matirx column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, b;
	int l = 0;
	int r = 0;

	for (i = 0; i < size; i++)
	{
		b = (i * size) + i;
		l += *(a + b);
	}
	for (j = 0; j < size; j++)
	{
		b = (j * size) + (size - 1 - j);
		r += *(a + b);
	}
	printf("%i, %i\n", l, r);
}

