#include "main.h"

/**
  * print_alphabetx10 - printing the alphabet in lower case 10 times
  */

void print_alphabetx10(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}




