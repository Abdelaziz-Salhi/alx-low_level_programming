<<<<<<< HEAD
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
=======
#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
