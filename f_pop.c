#include "monty.h"
#include "extern.h"
/**
 * pop - deletes the element to the of the stack
 * @head: pointer to the stack
 * @line_number: line number inside the file
*/
void pop(stack_t **head, unsigned int line_number)
{
stack_t *temp, *prev;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
if (temp->prev != NULL)
{
prev = temp->prev;
prev->next = NULL;
top_of_stack = prev;
free(temp);
}
else
{
*head = NULL;
top_of_stack = NULL;
free(temp);
}
}
