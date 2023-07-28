#include "3-calc.h"
<<<<<<< HEAD

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
=======
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that returns the sum of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to sum a + b.
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 */
int op_add(int a, int b)
{
	return (a + b);
}
<<<<<<< HEAD
/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
=======

/**
 * op_sub - a function that returns the subtract of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to substract a - b.
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 */
int op_sub(int a, int b)
{
	return (a - b);
}
<<<<<<< HEAD
/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
=======

/**
 * op_mul - a function that returns the multiply of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to multiply a * b.
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 */
int op_mul(int a, int b)
{
	return (a * b);
}
<<<<<<< HEAD
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
=======

/**
 * op_div - a function that returns the divide of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to divide a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a function that returns the module of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to module a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	return (a % b);
}
