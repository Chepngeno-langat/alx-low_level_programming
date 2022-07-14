#include "main.h"

/**
 * reverse_array - reverses contents of array
 * @a: parameter 1
 * @n: parameter 2
 * Return: return reversed dtring
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
int arr[n];

for (i = 0; i < n / 2; i++)
{
temp = arr[i];
arr[i] = arr[n - i - 1];
arr[n - i - 1] = temp;
}
return (arr[i]);
}
