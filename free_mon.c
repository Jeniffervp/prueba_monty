#include "monty.h"

/**
 * fmonkey - function that free a list.
 * @stack: the list.
 * Return: nothin.
 */

void fmonkey(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
	fclose(batm.fil);
	free(batm.buf);
}
