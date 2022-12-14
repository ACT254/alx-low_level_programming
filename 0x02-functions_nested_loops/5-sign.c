#include "main.h"

/**
  * print_sign - checking the sign of a number
  * @n: the number whose sign is to be checked
  *
  * Return: 1, 0 or -1 depending on the number
  */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
}
