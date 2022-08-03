#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 * Return: No
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
insigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
