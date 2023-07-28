#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
=======
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (p == 98 && q == 99)
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
