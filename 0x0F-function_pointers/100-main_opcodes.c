#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
=======
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
 */
int main(int argc, char *argv[])
{
	int bytes, i;
<<<<<<< HEAD
	char *arr;
=======
	unsigned char *func_ptr;
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
<<<<<<< HEAD

	bytes = atoi(argv[1]);

=======
	bytes = atoi(argv[1]);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
<<<<<<< HEAD

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
=======
	func_ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	}
	return (0);
}
