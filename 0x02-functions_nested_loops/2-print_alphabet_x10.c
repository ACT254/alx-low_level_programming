#include "main.h"

/**
  * print_alphabet_x10 - printing the alphabet in lower case 10 times
  */

void print_alphabet_x10(void)
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




