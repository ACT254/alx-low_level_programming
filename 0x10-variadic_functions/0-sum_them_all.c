#include "variadic_functions.h"
/**
  * sum_them_all - gets the sum of all the parameters
  * @n: the number of values to be added
  *
  * Return: the sum of the numbers
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i; sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}


