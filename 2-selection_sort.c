#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: pointer to an array
 * @size: size of the array
 * Retrun: nothing (void)
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, step;
	int tmp;

	for (step = 0; step < size -1; step++)
	{
		j = step;
	
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[j])
				j = i;
		}

		if (j != step)
		{
			tmp = array[step];
			array[step] = array[j];
			array[j] = tmp;

			print_array(array, size);
		}
	}
}
