#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to double linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *tmp, *idx;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	head = *list;
	tmp = head->next;
	while (tmp != NULL)
	{
		idx = tmp->prev;
		while (idx != NULL)
		{
			if (tmp->n < idx->n)
			{
				if (tmp->next != NULL)
				{
					tmp->next->prev = idx;
				}
				if (idx->prev != NULL)
				{
					idx->prev->next = tmp;
				}
				else
				{
					head = tmp;
					*list = head;
				}
				tmp->prev = idx->prev;
				idx->next = tmp->next;
				tmp->next = idx;
				idx->prev = tmp;
				print_list(head);
			}
			idx = idx->prev;
		}
		tmp = tmp->next;
	}
}
