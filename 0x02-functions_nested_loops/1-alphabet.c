#include "main.h"

/**
 * main - print letters in lowercase
 * Return: 0
 */
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
