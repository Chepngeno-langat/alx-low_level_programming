#include "lists.h"

/**
 * print_listint - function printd all the elemnts of a listint list
 * @h: pointer to the list
 * Return: returns the number of nodes in the listint list
 */
size_t print_listint(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count += 1;
h = h->next;
}
return (count);
}
