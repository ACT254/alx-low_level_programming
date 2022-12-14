#include "main.h"

/**
  * _abs - finds the absolute value of a number
  *
  * @n: the number to be checked
  * Return: returns the absolute value depending on the number
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
