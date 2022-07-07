#include "main.h"

/**
 * print_numbers -print single digit numbers
 * Return: 0
 */
void print_numbers(void)
{
int i;

i = '0';
while (i <= '9')
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
