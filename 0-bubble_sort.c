#include "sort.h"
/**
 * bubble_sort - Sorts am array of integers
 * in ascending order using the Bubble sort
 * algorithm
 *
 * @array: array of integers
 * @size: size of the array
 * Return: void
**/
void bubble_sort(int *array, size_t size)
{
	unsigned int j, i;
	int tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j + 1 < size && array[j + 1] < array[j])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
