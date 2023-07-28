#include <stdio.h>

/**
<<<<<<< HEAD
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);
=======
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum += fibonacci[i];
	}
	printf("%ld\n", sum);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c

	return (0);
}
