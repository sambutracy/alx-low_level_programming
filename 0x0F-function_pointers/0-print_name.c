#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - to print a name using pointer to function
 * @name: value of string to add
 * @f: pointer to function
 * Return:void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
