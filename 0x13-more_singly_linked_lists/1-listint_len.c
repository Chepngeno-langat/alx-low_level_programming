#include "lists.h"

/**
 * listint_len - function printd all the elemnts of a listint list
 * @h: pointer to the list
 * Return: returns the number of nodes in the listint list
 */
size_t listint_len(const listint_t *h)
{
const listint_t *h;
int count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
