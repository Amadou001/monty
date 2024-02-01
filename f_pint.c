#include "monty.h"
/**
 * pint - prints the value to the top of the stack
 * @head: head of the doubly linked list
 * @line_number: line number inside the file
*/
void pint(stack_t **head, unsigned int line_number)
{
stack_t *temp;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
printf("%d\n", temp->n);
}
