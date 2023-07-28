#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

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
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	putchar('\n');

	return (0);
}
