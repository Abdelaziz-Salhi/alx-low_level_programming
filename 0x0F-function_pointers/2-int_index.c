<<<<<<< HEAD
#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
=======
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare the elements throw array
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	return (-1);
}
