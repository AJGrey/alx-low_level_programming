#include "search_algos.h"
#include <math.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

/**
 * jump_search - searches for a value in a sorted array using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value in array or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;

    if (array == NULL)
        return (-1);

    while (array[min(step, size) - 1] < value)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return (-1);
    }

    while (array[prev] < value)
    {
        prev++;

        if (prev == min(step, size))
            return (-1);
    }

    if (array[prev] == value)
        return (prev);

    return (-1);
}
