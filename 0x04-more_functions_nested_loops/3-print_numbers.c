<<<<<<< HEAD
#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

=======
#include "holberton.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
