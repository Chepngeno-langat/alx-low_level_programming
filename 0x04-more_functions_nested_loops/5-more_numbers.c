#include "main.h"

/**
 * more_numbers - prints 10 times
 */
void more_numbers(void)
{
int i;
int x;

i = 0;
while (i <= 9)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');
}
i++;
_putchar('\n');
}
}
