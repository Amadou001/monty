#include "monty.h"
#include "extern.h"
/**
 * add - adds the top two elements of the stack.
 * @head: pointer the stack
 * @line_number: line number inside the file
*/
void add(stack_t **head, unsigned int line_number)
{
stack_t *temp;
int n = 0;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp != NULL)
{
n++;
temp = temp->next;
}
if (n < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
if (temp->prev != NULL)
{
temp->prev->n = temp->prev->n + temp->n;
temp->prev->next = NULL;
top_of_stack = temp->prev;
free(temp);
}
}
