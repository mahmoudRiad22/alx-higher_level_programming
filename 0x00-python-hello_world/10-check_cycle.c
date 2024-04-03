#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle or not
 *
 * Return: 1 if true, 0 if false
 */
int check_cycle(listint_t *list)
{
	listint_t *step1 = list;
	listint_t *step2 = list;

	if (!list)
		return (0);

	while (step1 && step2 && step2->next)
	{
		step1 = step1->next;
		step2 = step2->next->next;
		if (step1 == step2)
			return (1);
	}

	return (0);
}
