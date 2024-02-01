#include "monty.h"
#include "extern.h"
/**
 * div - divides the second top element of the stack
 * by the top element of the stack.
 * @head: pointer to the stack
 * @line_number: line number inside the file
*/
void f_div(stack_t **head, unsigned int line_number)
{
stack_t *temp;
int n = 0;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short", line_number);
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
fprintf(stderr, "L%d: can't div, stack too short", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero", line_number);
exit(EXIT_FAILURE);
}
temp->prev->n = temp->prev->n / temp->n;
temp->prev->next = NULL;
top_of_stack = temp->prev;
free(temp);
}
