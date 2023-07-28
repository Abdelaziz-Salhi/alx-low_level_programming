<<<<<<< HEAD
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

=======
#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
>>>>>>> 419bf1b17aae4c6741137a137b037c98cff2e51c
#endif
