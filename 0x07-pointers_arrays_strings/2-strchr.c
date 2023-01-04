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

	while (*(s + n) != '\0')
	{
		if (*(s + n) == c)
		{
			counter++;
			break;
		}
		else
		{
			n++;
			s++;
		}

	}
	if (counter != 0)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}




























}
