#include "main.h"

/**
  * _puts_recursion: prints a string followed by a new line
  * @s: the pointer to the string to be printed
  * Return: nothing
  */

void _puts_recursionn(char *s)
{
	if (*s != '\0')
		_purchar(*s);
	else _putchar('\n');
	_puts_recursion(s++);
}


