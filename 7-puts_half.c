#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of the string
 * @str: parameter
 */
void puts_half(char *str)
{
int x, y, i;

x = strlen(str);
if (x % 2 == 1)
{
y = x / 2 + 1;
}
else
{
y = x / 2;
}
for (i = y; i < x; i++)
{
_putchar([i]);
}
_putchar('\n');
}
