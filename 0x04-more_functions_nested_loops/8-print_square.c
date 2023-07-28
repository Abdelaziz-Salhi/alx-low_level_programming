<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints 10 times the numbers, from 0 to 14
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');

				j++;
			}
			_putchar('\n');

			i++;
		}
	}
=======
#include "holberton.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
