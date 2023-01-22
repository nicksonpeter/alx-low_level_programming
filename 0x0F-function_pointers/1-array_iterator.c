#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int var;

	if (!array || !action)
		return;

	for (var = 0; var < size; var++)
		action(array[var]);
}
