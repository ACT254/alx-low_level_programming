#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: the number to be checked
  *
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		return (-1 * (n % 10));
	}
}

