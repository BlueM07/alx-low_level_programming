#include <stdlib.h>
#include "lists.h"

/**
 * list_len - list
 * @h: h pointer
 *
 * Return: total elements
 */
size_t list_len(const list_t *h)
{
size_t total;

total = 0;
while (h != NULL)
{
h = h->next;
total++;
}
return (total);

}
