#ifndef CALC_H
#define CALC_H
<<<<<<< HEAD
/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
=======

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
<<<<<<< HEAD

=======
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
#endif
