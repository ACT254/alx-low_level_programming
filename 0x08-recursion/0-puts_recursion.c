#include "main.h"

/**
  * _puts_recursion - prints a string followed by a new line
  * @s: the pointer to the string to be printed
  * Return: nothing
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (_putchar('\n'));
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}


