#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
=======
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);

					if (d == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
				}
			}
		}
	}
	putchar('\n');
<<<<<<< HEAD
=======

>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	return (0);
}
