#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - prints numbers followed by a new line
  * @separator: what is the delimiter for the numbers
  * @n: the number of values to be printed
  *
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	separator = (separator != NULL) ? separator : "";

	for (unsigned int i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
		else
		{
			printf("%d\n", va_arg(args int));
		}
	}
}

