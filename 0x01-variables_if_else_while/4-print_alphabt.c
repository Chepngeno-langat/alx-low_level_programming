#include <stdio.h>

/**
 * main - prints alphabet except q and ein lower case
 * Return: 0
 */
int main(void)
{

char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
