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
	unsigned int j;
	int tmp, swp = 0;

	if (!array || size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		if (j + 1 < size && array[j + 1] < array[j])
		{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
			swp += 1;
			print_array(array, size);
		}
		if (swp == 0 && j == size - 1)
			break;
		if (j == size - 1)
		{
			j = 0;
			swp = 0;
			continue;
		}
	}
}
