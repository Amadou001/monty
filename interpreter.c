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
instruction_t functions[] = {
{"push", push},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"sub", sub},
{"div", f_div}
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
for (i = 0; i < 7; i++)
{
if (strcmp(opcode, functions[i].opcode) == 0)
{
functions[i].f(&stack, (strcmp(opcode, "push") == 0) ? operand : line_number);
return;
}
else if (strcmp(opcode, "pall") == 0)
{
pall(&top_of_stack);
return;
}
else if (strcmp(opcode, "nop") == 0)
{
nop();
return;
}
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
