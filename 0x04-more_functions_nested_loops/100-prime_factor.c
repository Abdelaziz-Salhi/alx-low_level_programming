#include <stdio.h>

/**
<<<<<<< HEAD
 * main - print largest prime factor of 612852475143
 * Return: 0 on Success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i;
	unsigned long large_prime;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			large_prime = i;
			num /= large_prime;
		}
	}
	printf("%lu\n", large_prime);
=======
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	return (0);
}
