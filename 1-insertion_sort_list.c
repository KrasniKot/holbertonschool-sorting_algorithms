#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion sort algorithm.
 * @list: array to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *crnt, *temp, *prv;


	crnt = *list;
	while (crnt)
	{
		temp = crnt;
		while (temp->prev && temp->prev->n > temp->n)
		{
			prv = temp->prev;
			prv->next = temp->next;
			temp->prev = prv->

			print_list(*list);
		}
		*list = (*list)->next;
	}
}
