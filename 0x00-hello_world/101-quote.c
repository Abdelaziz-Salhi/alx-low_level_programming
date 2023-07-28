#include <stdio.h>
<<<<<<< HEAD
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
<<<<<<< HEAD

=======
>>>>>>> 858d1c32628c7f753ca70344d7d101ccc77abd53
=======
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
