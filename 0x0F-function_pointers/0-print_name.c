#include "function_pointers.h"
/**
 * print_name - prints any name
 * @name: name printed
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
