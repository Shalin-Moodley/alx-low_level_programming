#include "function_pointers.h"
/**
 * array_iterator - iterates array
 * @array: array
 * @size: size of array
 * @action: pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
