<<<<<<< HEAD
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
=======
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -  the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: An input char pointer operator passed as argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter.
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
<<<<<<< HEAD
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
=======
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
