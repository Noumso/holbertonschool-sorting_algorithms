#include "sort.h"

/**
 * bubble_sort - sorts an array on integers in ascending order
 * @array: pointer to an array
 * @size: size of the array
 * Return: nothing (void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, step;
	int tmp;

	for (step = 0; step < size - 1; step++)
	{
		for (i = 0; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;

				print_array(array, size);
			}
		}
	}
}
