#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index of the first occurrence of the value,
 *         or -1 if the value is not found
 **/
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Checking array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
