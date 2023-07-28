<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
return (0);
=======
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
