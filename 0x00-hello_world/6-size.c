<<<<<<< HEAD
#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> 858d1c32628c7f753ca70344d7d101ccc77abd53
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
