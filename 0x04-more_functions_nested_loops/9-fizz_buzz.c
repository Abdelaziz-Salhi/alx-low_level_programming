<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}

=======
#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
