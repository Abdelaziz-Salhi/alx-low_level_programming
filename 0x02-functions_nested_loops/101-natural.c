<<<<<<< HEAD
/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
<<<<<<< HEAD
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

=======
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	printf("%d\n", sum);

	return (0);
}
