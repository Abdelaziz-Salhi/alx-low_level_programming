<<<<<<< HEAD
#include "function_pointers.h"

/**
* print_name - prints a name
* @name:name to print
* @f: function which print name
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

=======
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: pointer to name to print
 * @f: function to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
	f(name);
}
