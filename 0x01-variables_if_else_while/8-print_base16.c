#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
char c;
int i;

c = 'a';
i = 48;
while (i <= 57)
{
putchar(i);
i++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
