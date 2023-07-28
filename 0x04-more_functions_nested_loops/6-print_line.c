<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: parameter
 * Returns: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
=======
#include "holberton.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
