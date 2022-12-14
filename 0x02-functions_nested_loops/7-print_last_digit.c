#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: the number to be checked
  *
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	int j = n % 10;

	if (j < 0)
	{
		_putchar(-j + '0');
		return (-j);
	}
	else
	{
		_putchar(j + '0');
		return (j);
	}
}
