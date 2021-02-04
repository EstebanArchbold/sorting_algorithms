#include "sort.h"

/**
* insertion_sort_list - sorting arrays double linked in ascendig order.
* @list: List to order
* Return : Void - No return
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL, *prev1 = NULL, *next1 = NULL, *non = NULL;
	int bar = 0;

	if (!list || !*list)
		return;

	non = *list;

	while (non)
	{
		if (non->prev != NULL)
		{
			aux = non;
			bar = 0;
			while (aux && aux->prev->n > aux->n)
			{
				prev1 = aux->prev;
				next1 = aux->next;

				if (prev1->prev)
					prev1->prev->next = aux;
				else
				{
					*list = aux;
					bar = 1;
				}
				if (next1)
					next1->prev = prev1;

				aux->prev = prev1->prev;
				aux->next = prev1;
				prev1->prev = aux;
				prev1->next = next1;
				print_list(*list);
				if (bar)
					break;
			}
		}
		non = non->next;
	}
}
