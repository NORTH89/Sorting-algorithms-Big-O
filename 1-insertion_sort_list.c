#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: The doubly linked list to be sorted
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p, *temp;

	if (!list)
		return;

	p = *list;

	while (p)
	{
		while (p->next && (p->n > p->next->n))
		{
			temp = p->next;
			p->next = temp->next;
			temp->prev = p->prev;

			if (p->prev)
				p->prev->next = temp;

			if (temp->next)
				temp->next->prev = p;

			p->prev = temp;
			temp->next = p;

			if (temp->prev)
				p = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		p = p->next;
	}
}
