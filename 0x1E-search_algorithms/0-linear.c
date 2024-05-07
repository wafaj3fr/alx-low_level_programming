#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located, -1 or NULL
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
