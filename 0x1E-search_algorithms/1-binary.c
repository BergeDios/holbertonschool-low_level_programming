#include "search_algos.h"

/**
 * print_search - function to print the array in which we are searching
 * @array: input array
 * @left_idx: left index of original array
 * @right_idx: right index of original array
 * Return: void
 */
void print_search(int *array, size_t left_idx, size_t right_idx)
{
	size_t idx;

	printf("Searching in array: ");
	for (idx = left_idx; idx <= right_idx; idx++)
	{
		if (idx != right_idx)
			printf("%d, ", array[idx]);
		else
			printf("%d\n", array[idx]);
	}
}

/**
 * binary_search - searches for a value in array if int using binary search
 * @array: input array
 * @size: size of array
 * @value: value searching for
 * Return: index of value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid_idx = 0;
	size_t left_idx = 0;
	size_t right_idx = size - 1;

	if (!array)
		return (-1);

	while (left_idx <= right_idx)
	{
		print_search(array, left_idx, right_idx);
		mid_idx = (left_idx + right_idx) / 2;
		if (array[mid_idx] == value)
			return (mid_idx);
		else if (array[mid_idx] < value)
			left_idx = mid_idx + 1;
		else
			right_idx = mid_idx - 1;
	}
	return (-1);
}
