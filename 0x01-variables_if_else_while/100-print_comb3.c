<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by goma
*/
int main(void)
{
int n = 48;
int m = 49;
int j = 0, i = 0, a = 8;
while (i  <= a && a != -1)
{
i++;
while (j <= a)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
m++;
j++;
}
n++;
m = m - a;
a--;
i = 0;
j = 0;
}
putchar('\n');
return (0);
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);

				if (d == '8' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
}
