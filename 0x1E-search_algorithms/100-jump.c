#include "search_algos.h"
#include <math.h>

/**
 * jump_search - fucntion to search for a value using jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: idx of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, idx = 0, jumps = sqrt(size);

	if (!array)
		return (-1);

	while (idx <= right)
	{
		if (array[idx] >= value)
		{
			printf("Value found between indexes [%li] and [%li]\n", left, idx);
			for (; left <= idx; left++)
			{
				printf("Value checked array[%li] = [%i]\n", left, array[left]);
				if (array[left] == value)
				{
					return (left);
				}
			}
			return (-1);
		}
		else
		{
			printf("Value checked array[%li] = [%i]\n", idx, array[idx]);
			left = idx;
			idx += jumps;
		}
	}
	printf("Value found between indexes [%li] and [%li]\n", left, idx);
	printf("Value checked array[%li] = [%i]\n", left, array[left]);
	return (-1);
}
