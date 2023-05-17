#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion sort algorithm.
 * @list: array to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *crnt, *temp, *prvnode;

	if (!*list)
		return;

	crnt = *list;
	while (crnt)
	{
		temp = crnt;
		while (temp->prev && temp->n < temp->prev->n)
		{
			prvnode = temp->prev;
			if (temp->next)
				temp->next->prev = prvnode;
			if (prvnode->prev)
				prvnode->prev->next = temp;
			else
				*list = temp;

			prvnode->next = temp->next;
			temp->prev = prvnode->prev;
			temp->next = prvnode;
			prvnode->prev = temp;


			print_list(*list);
		}
		crnt = crnt->next;
	}
}
