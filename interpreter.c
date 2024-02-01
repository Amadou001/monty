#include "monty.h"
#include "extern.h"
/**
 * interpret - interprets the opcode
 * @line: pointer to the line with the opcode and the operand
 * @line_number: line number inside the file
*/
void interpret(char *line, int line_number)
{
char *opcode, *operand_str;
int operand = 0, i;
instruction_t fonctions[] = {
{"push", push}
};
opcode = strtok(line, " \t\n");
operand_str = strtok(NULL, " \t\n");
if (strcmp(opcode, "push") == 0)
{
if (operand_str != NULL && (isInteger(operand_str) == 1))
{
operand = atoi(operand_str);
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
}
for (i = 0; i < 1; i++)
{
if (strcmp(opcode, fonctions[i].opcode) == 0)
{
fonctions[i].f(&stack, operand);
}
else if (strcmp(opcode, "pall") == 0)
{
pall(&top_of_stack);
}
else if (strcmp(opcode, "pint") == 0)
{
pint(&stack, line_number);
}
else if (strcmp(opcode, "pop") == 0)
{
pop(&stack, line_number);
}
else if (strcmp(opcode, "swap") == 0)
{
swap(&stack, line_number);
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
}
}
