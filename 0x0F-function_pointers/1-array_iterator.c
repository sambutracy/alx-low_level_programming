#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each of the array elements
 * @array: array value
 * @size: number of elements to print
 * @action: pointers supposed to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
