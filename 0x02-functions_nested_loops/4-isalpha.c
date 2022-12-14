#include "main.h"

/**
  * _isalpha - checking whether a character is alphabetic
  * @c: The character to be checked
  * Return: 1 if alphabet 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
