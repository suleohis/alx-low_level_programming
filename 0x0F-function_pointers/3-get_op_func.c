#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed to the function
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_div},
		{NULL, NULL},
	};

	int i;

	for (i = 0; i < 5; i++)
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	return (NULL);
}
