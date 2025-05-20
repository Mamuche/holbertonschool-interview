#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * number_max - find the highest number in a array
 * 
 * @array: array of integers
 * @size: Number of elements in @array
 * Return: the highest number in the array
 */
int number_max(int *array, size_t size)
{
    int max = array[0];
    size_t i;

    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

/**
 * sort_number - Sorts an array according to a specific digit (LSD)
 * 
 * @array: The array to be sorted
 * @size: Number of elements in @array
 * @sig: Digit position to sort by (1 = units, 10 = tens...)
 */

void sort_number(int *array, size_t size, int sig)
{
    int *output = malloc(size * sizeof(int));
    int count[10] = {0};
    size_t i;

    if (!output)
        return;

    for (i = 0; i < size; i++)
        count[(array[i] / sig) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = size; i > 0; i--)
    {
        int digit = (array[i - 1] / sig) % 10;
        output[count[digit] - 1] = array[i - 1];
        count[digit]--;
    }

    for (i = 0; i < size; i++)
        array[i] = output[i];

    free(output);
}

/**
 * radix_sort - sorts an array of integers in ascending
 * order using the Radix sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void radix_sort(int *array, size_t size)
{
    int max = number_max(array, size);
    int sig;

    if (array == NULL || size < 2)
        return;

    for (sig = 1; max / sig > 0; sig *= 10)
    {
        sort_number(array, size, sig);

        print_array(array, size);
    }
}
