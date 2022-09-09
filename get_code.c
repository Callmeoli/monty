#include "monty.h"
/**
* get_opcodes - select the correct opcode to perform
*
* @opc: opcode passed
*
* Return: ponter to the function thar execute
*/
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (strcmp(instruct[i].opcode, opc) == 0)
			break;
	}
	return (instruct[i].f);		
}
