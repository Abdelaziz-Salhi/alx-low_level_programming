#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
=======
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c

	return (0);
}
