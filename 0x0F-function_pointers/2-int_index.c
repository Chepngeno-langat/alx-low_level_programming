#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of elements
 * @cmp: comares values
 * Return: index first element cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
