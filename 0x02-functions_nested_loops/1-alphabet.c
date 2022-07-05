#include "main.h"

/**
 * print_alphabet - print letters in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
