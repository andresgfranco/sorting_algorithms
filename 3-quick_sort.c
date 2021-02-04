#include "sort.h"
/**
 * quick_sort - Algorithm Quick Sort
 *
 * @array: Pointer that point to an array
 * @size: size of the array
**/

void quick_sort(int *array, size_t size)
{
	QuickSortAlgo(array, 0, size - 1, size);
}

/**
 * swap_array - Swap two elements in an array
 * @array: Pointer that point to an array
 * @j: This is the index to swap with the index k
 * @k: This is the index to swap with the index j
**/
void swap_array(int *array, size_t j, size_t k)
{
	int temp;

	temp = array[j];
	array[j] = array[k];
	array[k] = temp;
}


/**
 * partition - Function that implement the Lomuto Partition Scheme
 * @array: Pointer that point to an array
 * @low: The minimum index
 * @high: The maximum index
 * @size: The size of the array
 * Return: The number of the partition
**/
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int j, i = (low  - 1);

	for (j = low ; j <= high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_array(arr, i, j);
				print_array(arr, size);
			}
		}
	}
	return (i);
}

/**
 * QuickSortAlgo - Algorithm Quick Sort
 * @array: Pointer that point to an array
 * @low: The minimum index
 * @high: The maximum index
 * @size: The size of the array
**/
void QuickSortAlgo(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		QuickSortAlgo(array, low, pi - 1, size);
		QuickSortAlgo(array, pi + 1, high, size);
	}
}

