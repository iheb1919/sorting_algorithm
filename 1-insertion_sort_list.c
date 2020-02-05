#include "sort.h"
/**
 * insertion_sort_list - function that sorts  integers in ascending order
 * @list: pointer to pointer of list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *nodenext, *node, *node3;
if (list != NULL && *list != NULL && (*list)->next != NULL)
{
nodenext = (*list)->next;
while (nodenext)
{
node = nodenext->prev;
if (node)
{
if (nodenext->n < node->n)
{
node3 = node->prev;
if (node3)
node3->next = nodenext;
else
*list = nodenext;
nodenext->prev = node3;
node->prev = nodenext;
node->next = nodenext->next;
if (node->next)
node->next->prev = node;
nodenext->next = node;
node = node->prev;
if (nodenext->prev)
nodenext = nodenext->prev;
print_list(*list);
}
}
if (nodenext)
nodenext = nodenext->next;
}
}
else
return;
}
