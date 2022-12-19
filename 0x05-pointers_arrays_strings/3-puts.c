#include "main.h"

/**
  * _puts - prints a string followed by a new line
  * @str: The string to be printed
  *
  * Return: nothing
  */

void _puts(char *str)
{
	int i, n;

	n = _strlen(str);

	for (i = 0; i < n; i++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
