#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
int i;

i = 48;
while (i <= 57)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
