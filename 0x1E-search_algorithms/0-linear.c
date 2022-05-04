#include "search_algos.h"

/**
 * linear_search - searches for a value in arr of ints using linear search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: alwatys index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
