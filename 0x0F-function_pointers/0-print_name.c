#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name -  function that prints a name
  * @name: pointer to the name to be printed
  * @f: the pointer to the function to be used
  *
  * Retunrn: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			f(name);
		}
	}
}
