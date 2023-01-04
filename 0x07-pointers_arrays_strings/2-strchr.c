#include "main.h"

/**
  * _strchr - returns pointer to the first ocurrence of character
  * @s: the string to be checked
  * @c: the character to be checked
  *
  * Return: pointer to the first occurence of the character
  */

char *_strchr(char *s, char c)
{
	int n = 0;
	int counter = 0;
	char *p;

	while (*(s + n) != '\0')
	{
		if (*(s + n) == c)
		{
			p = s;
			counter++;
			break;
		}
		else
		{
			n++;
		}

	}
	if (counter != 0)
	{
		return (p);
	}
	else
	{
		return (NULL);

}
