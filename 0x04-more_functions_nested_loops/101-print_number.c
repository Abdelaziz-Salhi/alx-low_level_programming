<<<<<<< HEAD
#include "main.h"

/**
 * print_number - prints an integer
 * @n: random integer
 * Return: void
 */
void print_number(int n)
{
	char ld, cr;
	int r;
	int ct = 0;

	if (n < 0)
	{
		_putchar ('-');
		ld = (char)('0' - (n % 10));
		n = n / -10;
	}

	else
	{
		ld = (char)((n % 10) + '0');
		n = n / 10;
	}

	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n = n / 10;
		ct++;
	}

	while (r > 0)
	{
		cr = (char)((r % 10) + '0');
		_putchar(cr);
		r = r / 10;
		ct--;
	}
	while (ct != 0)
	{
		_putchar('0');
		ct--;
	}
	_putchar(ld);
=======
#include "holberton.h"
void print_integer(int m);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
