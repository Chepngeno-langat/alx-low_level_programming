#include "main.h"
#include <string.h>

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: parameter
 * Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
