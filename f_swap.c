#include "monty.h"
/**
 * swap -  swaps the top two elements of the stack
 * @head: pointer to the stack
 * @line_number: line number inside the file
*/
void swap(stack_t **head, unsigned int line_number)
{
stack_t *temp;
int n_temp;
int element_number = 0;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp != NULL)
{
element_number++;
temp = temp->next;
}
if (element_number < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
n_temp = temp->n;
temp->n = temp->prev->n;
temp->prev->n = n_temp;
}
