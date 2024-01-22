#include "sort.h"

/**
 * _swap - Swaps two elements in a doubly linked list
 *
 * @node: The node to be swapped
 * @list: The doubly linked list
 *
 * Return: Nothing
 */
void _swap(listint_t **node, listint_t **list)
{
	listint_t *tmp = *node, *tmp2, *tmp3;

	if (!(*node)->prev)
		*list = (*node)->next;

	tmp = tmp3 = *node;
	tmp2 = tmp->next;

	tmp->next = tmp2->next;
	tmp3 = tmp->prev;
	tmp->prev = tmp2;
	tmp2->next = tmp;
	tmp2->prev = tmp3;

	if (tmp2->prev)
		tmp2->prev->next = tmp2;

	if (tmp->next)
		tmp->next->prev = tmp;

	*node = tmp2;
}

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Cocktail sort algorithm
 *
 * @list: The doubly linked list to be sorted
 *
 * Return: Nothing
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *head, *aux;
	int a = 0, n = -1, m = -1;

	if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
		return;

	head = *list;
	while (m >= n)
	{
		n++;
		while (head->next && a != m)
		{
			if (head->n > head->next->n)
			{
				aux = head;
				_swap(&aux, list);
				print_list(*list);
				head = aux;
			}

			a++;
			head = head->next;
		}

		if (n == 0)
			m = a;
		m--;
		while (head->prev && a >= n)
		{
			if (head->n < head->prev->n)
			{
				aux = head->prev;
				_swap(&aux, list);
				print_list(*list);
				head = aux->next;
			}
			a--;
			head = head->prev;
		}
	}
}
