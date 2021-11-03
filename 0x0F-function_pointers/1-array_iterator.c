#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to functions
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int fp;

	if (array && action)
	{
		while (fp < size)
		{
			action(array[fp]);
			fp++;
		}
	}
}
