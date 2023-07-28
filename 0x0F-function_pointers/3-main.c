<<<<<<< HEAD
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;
=======
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

<<<<<<< HEAD
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
=======
	func = get_op_func(argv[2]);
	if (func == NULL)
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	{
		printf("Error\n");
		exit(99);
	}

<<<<<<< HEAD
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

=======
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	return (0);
}
