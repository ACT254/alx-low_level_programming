#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - perfoms a fuction on all the elements of an array
  * @array: a pointer to an integer array
  * @size: the size of the array to be iterated
  * @action: the function to be used during iteration
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (n = 0; n < size; n++)
	{
		(*action)(array[n]);
	}
}
