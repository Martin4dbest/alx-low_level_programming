#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - this performs iteration to an array
 * @array: an array to iterate
 * @size: is the size
 * @action: the action to perform on each array of element
 *
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
