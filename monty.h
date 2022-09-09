#ifndef MONTY_H
#define MONTY_H
#define  _GNU_SOURCE
#define _OPEN_SYS_ITOA_EXT
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s

{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _push(int a);
void _pall(int a);
void _pint(int a);
void _pop(int a);
void _swap(int a);
void _queue(int a);
void _stack(int a);
void _add(int a);
void _nop(int a);
void _sub(int a);
void _mul(int a);
void _div(int a);
void _mod(int a);
void _pchar(int a);
void _pstr(int a);
void _rotl(int a);
void _rotr(int a);
#endif
