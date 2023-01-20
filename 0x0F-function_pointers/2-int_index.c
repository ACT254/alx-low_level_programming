#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer and returns index of first occurence
  *
  * @array: a pointer to the array to be used for searching
  * @size: the size of the array
  * @cmp: a pointer to the function which will do any comparisons
  *
  * Return: the index of the first occurence of the integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	int i = 0, index = 0;

	while (i < size)
	{
		if (cmp(array[i]) == 0)
		{
			index++;
			i++;
		}
		else
		{
			return (index);
			break;
		}
	}

	return (-1);
}
