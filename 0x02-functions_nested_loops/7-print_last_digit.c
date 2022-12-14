#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: the number to be checked
  *
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = (n % 10);
		_putchar(last_digit);
		_putchar(last_digit);
		_putchar('\n');

	}
	else
	{
		last_digit = -1 * n % 10;
		_putchar(last_digit);
		_putchar(last_digit);
		_putchar('\n');

	}
}
