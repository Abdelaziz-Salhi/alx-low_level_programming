<<<<<<< HEAD
#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

=======
#include "holberton.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	_putchar('\n');
}
