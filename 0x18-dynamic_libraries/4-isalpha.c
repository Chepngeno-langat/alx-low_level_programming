#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: parameter to be checked
 * Return: 0 or 1 according to condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
