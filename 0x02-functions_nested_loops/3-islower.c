<<<<<<< HEAD
#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
=======
#include "holberton.h"

/**
 * _islower - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
